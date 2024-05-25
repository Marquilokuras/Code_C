/*
Diseñar y codificar un programa que muestre el valor mayor y menor entre tres números. Nota: Realice este ejercicio utilizando paso por valor,  y una función debe devolver un valor y la otra no devuelve valor. 
*/

#include <stdio.h>

void encontrarMayor(int num1, int num2, int num3, int *mayor);
int encontrarMenor(int num1, int num2, int num3);

int main() {
    int numero1, numero2, numero3;
    int mayor, menor;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &numero3);

    encontrarMayor(numero1, numero2, numero3, &mayor);
    menor = encontrarMenor(numero1, numero2, numero3);

    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    return 0;
}

void encontrarMayor(int num1, int num2, int num3, int *mayor) {
    *mayor = num1;

    if (num2 > *mayor) {
        *mayor = num2;
    }

    if (num3 > *mayor) {
        *mayor = num3;
    }
}

int encontrarMenor(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    return menor;
}