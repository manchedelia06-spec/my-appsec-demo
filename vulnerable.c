#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[10];
    // ОПАСНО: strcpy без проверки длины
    strcpy(buffer, input);
    printf("Copied: %s\n", buffer);
}

void test_gets() {
    char buffer[10];
    printf("Enter something: ");
    // ОПАСНО: gets() не проверяет длину ввода
    gets(buffer);
    printf("You entered: %s\n", buffer);
}

void test_sprintf() {
    char buffer[10];
    int num = 12345;
    // ОПАСНО: sprintf может переполнить буфер
    sprintf(buffer, "Number: %d", num);
    printf("Formatted: %s\n", buffer);
}

void test_scanf() {
    char buffer[10];
    printf("Enter a word: ");
    // ОПАСНО: scanf с %s без ограничения длины
    scanf("%s", buffer);
    printf("You entered: %s\n", buffer);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        vulnerable_function(argv[1]);
    }
    test_gets();
    test_sprintf();
    test_scanf();
    return 0;
}
