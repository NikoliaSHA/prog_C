/* *************************
// file: ~/coding/book/prog_C/6/spies.c
// date: 01/06/22
**************************** 
valgring --leak-check=full ./prog // проверка на утечку памяти */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *question;
	struct node *no;
	struct node *yes;
} node;

int yes_no(char *question) {
	char answer[3];
	printf("%s? (y/n): ", question);
	fgets(answer, 3, stdin);
	return answer[0] == 'y';
}

node* create(char *question){
	node *n = malloc(sizeof(node));
	n->question = strdup(question);
	n->no = NULL;
	n->yes = NULL;
	return n;
}

void release(node *n) {
	if (n) {
		if (n->no)
			release(n->no);
		if (n->yes)
			release(n->yes);
		if (n->question)
			free(n->question);
		free(n);
	}
}

int main() {
    char question[80];
	char suspect[40];
	node *start_node = create("Носит ли подозреваемы усы?");
	start_node->no = create("Лоретта Барншворц");
	start_node->yes = create("Иван Ложкин");

	node *current;
	do {
		current = start_node;
		while (1) {
			if (yes_no(current->question)) {
				if (current->yes) {
					current = current->yes;
				} else {
					printf("подозреваемый опознан\n");
					break;
				}
			} else if (current->no) {
				current = current->no;
			} else {
				/*присваиваем yes_node имя нового подозреваемого */
				printf("Кто подозреваемый? ");
				fgets(suspect, 40, stdin);
				node *yes_node = create(suspect);
				current->yes = yes_node;

				/*присваиваем no_node копию этого вопроса */
				node *no_node = create(current->question);
				current->no = no_node;

				/*затем заменяем этот вопрос на новый*/
				printf("Задайте мне вопрос, который подходит для %s, но не для %s. ", suspect, current->question);
				fgets(question, 80, stdin);
				free(current->question); // устраняем утечку памяти
				current->question = strdup(question);

				break;
			}
		}
		
	} while (yes_no("Выполнить еще раз"));
	release(start_node);
    return 0;
}