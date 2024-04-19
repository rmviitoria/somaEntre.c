/******************************************************************************

Crie um programa que faça a soma dos valores de 0 até 198.

*******************************************************************************/
#include <stdio.h>


int main() {
    int soma = 0;

    for (int i = 0; i <= 198; i++) {
        soma += i;
    }

    printf("A soma dos valores de 0 até 198 é: %d\n", soma);


    return 0;o
}
