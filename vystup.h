#include <stdio.h>
#define ENTER '\n'

float input(const char *text) {
    float number;
    int countOfChar;
    do {
        printf("Napiš %s: ", text);
        scanf("%f", &number);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Toto není žádné číslo. Vyber jakékoli ČÍSLO \n");
        } else if (number <= 0) {
            printf("Číslo musí být pozitivní. Zkus to znovu O_o \n");
        }
    } while (countOfChar != 0 || number <= 0);
    return number;
}