/*
Realizar un programa que permita ingresar un número entero y llamar a una función que devuelva su representación en binario.
*/


#include <stdio.h>

void decimalABinario(int numero);

int main() {
    int numeroDecimal;

    printf("Ingrese un número entero: ");
    scanf("%d", &numeroDecimal);

    printf("La representación binaria de %d es: ", numeroDecimal);
    decimalABinario(numeroDecimal);

    return 0;
}

void decimalABinario(int numero) {
    if (numero > 1) {
        decimalABinario(numero / 2);
    }
    printf("%d", numero % 2);
}