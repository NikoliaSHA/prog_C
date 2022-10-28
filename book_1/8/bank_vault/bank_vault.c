/* *************************
// file: ~/coding/book/prog_C/8/bank_vault/bank_vault.c
// date: 11/08/22
**************************** */

int main() {
    char s[] = "Скажи друг и проходи";
    encrypt(s);
    printf("зашифровано в '%s'\n", s);
    printf("Контрольная сумма %i\n", checksum(s));
    encrypt(s);
    printf("разшифровано обратно в '%s'\n", s);
    printf("Контрольная сумма %i\n", checksum(s));
    printf("ok файл собран make bank_vault.\n");
    return 0;
}