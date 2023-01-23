#include <stdio.h>
#include "vystup.h"
#define ENTER '\n'


int next() {
    printf("Zmáčkni na klávesnici 'Enter' \n");
    if (getchar() == ENTER) {
        return 1;
    } else {
        return 0;
    }
}

float input(const char *text);

int main() {
    float deposit, interestRate;
    do {
        deposit = input("Vklad");
        interestRate = input("Úroková sazba");
        printf("Tvůj nový zůstatek je šokujících : %.2f Kč. \n",
               deposit + deposit / 100 * interestRate);
    } while (next());

    return 0;
}
