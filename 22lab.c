#include <stdio.h>
#include <math.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS


int isDigitMy(char c) {
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

int toUpperAll(int c) {
    int new_c = c;
    if (c >= 'a' && c <= 'z') {
        new_c = 'A' + (c - 'a');
    }
    if (c >= 'а' && c <= 'п') {
        new_c = 'А' + (c - 'а');
    }
    if (c >= 'р' && c <= 'я') {
        new_c = 'Р' + (c - 'р');
    }
    if (c == 'ё') {
        new_c = 'Ё';
    }
    return new_c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //ЗАДАЧА 1
    /*char name[12];
    printf("введите ваше имя: ");
    fgets(name, 11, stdin);
    printf("приветствую тебя, %s\n", name);*/

    //ЗАДАЧА 2
    /*printf("введите символ = ");
    int ch = getchar();

    for (int c = ch; c <= ch + 19; c++) {
        printf("'%c' (%d)\n", c, c);
    }
    printf("\n\n\n");*/

    //ЗАДАЧА 3
    /*printf("введите символ = ");
    int ch = getchar();

    for (int c = ch; c >= ch - 29; c--) {
        printf("'%c' (%d)\n", c, c);
    }
    printf("\n\n\n");*/

    //ЗАДАЧА 4
    /*char s[80];
    printf("введите строку: ");
    fgets(s, 79, stdin);

    printf("\nВы ввели строку s = %s", s);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') cnt++;
    }

    printf("\nв ней %d пробел.\n", cnt);*/

    //ЗАДАЧА 5
    /*char s[100];
    printf("введите строку: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = '#';
        }
    }
    printf("обработанная строка: %s", s);*/

    //ЗАДАЧА 6
    /*char str[100];
    printf("введите строку: ");
    fgets(str, 100, stdin);
    printf("исходная: %s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isDigitMy(str[i])) {
            str[i] = "$";
        }
    }
    printf("итоговая: %s", str);*/

    //ЗАДАЧА 7
    //char str[100];
    //printf("введите строку: ");
    //fgets(str, 100, stdin);
    //printf("исходная: %s", str);
    //for (int i = 0; i < strlen(str); i++) {
    //    str[i] = toUpperAll(str[i]);
    //}
    //printf("итоговая: %s", str);


    //ЗАДАЧА 8
    char str[100];
    printf("введите строку: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("результат: %s\n", str);
}


