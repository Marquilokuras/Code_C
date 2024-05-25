/*
Realizar un programa que permita ingresar dos dos números y llame a una función que determine si son iguales o no. La función debe devolver un valor booleano.
*/

#include <stdio.h>
#include <stdbool.h>

bool sonIguales(int num1, int num2) {
    if (num1 == num2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero1, numero2;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    
    bool iguales = sonIguales(numero1, numero2);
    
    if (iguales) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}