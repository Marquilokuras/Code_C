/*
Escribir una función que calcule el factorial de un número entero y lo devuelva como resultado. El número debe ser ingresado por el usuario.
*/

#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Ingrese un número entero, para obtener su factorial: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("El factorial de %d es %d\n", num, result);
    return 0;
}