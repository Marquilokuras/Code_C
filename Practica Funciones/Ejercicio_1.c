/*
Escribir un programa que ingrese un número y llame a una función en la cual determine si un número es o no par. (La función debe devolver el valor)
*/

#include <stdio.h>

int esPar(int num) {
    if (num % 2 == 0) {
        return 1; //par
    } else {
        return 0; //impar
    }
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (esPar(numero)) {
        printf("El número es par.\n");
    } else {
        printf("El número no es par.\n");
    }

    return 0;
}