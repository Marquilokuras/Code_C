/*
Realizar un programa que simule una calculadora. El mismo debe contener un menú de opciones con las distintas operaciones que puede realizar. Las operaciones deben ser programadas utilizando funciones. (del tipo void)
Sumar dos números.
Restar dos números.
Multiplicar dos números.
Dividir dos números. 
*/

#include <stdio.h>

void sumar() {
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("El resultado de la suma es: %d\n", resultado);
}

void restar() {
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 - num2;
    printf("El resultado de la resta es: %d\n", resultado);
}

void multiplicar() {
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 * num2;
    printf("El resultado de la multiplicación es: %d\n", resultado);
}

int main() {
    int opcion;
    printf("Calculadora\n");
    printf("1. Sumar dos números\n");
    printf("2. Restar dos números\n");
    printf("3. Multiplicar dos números\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicar();
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}