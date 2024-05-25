/*
Escribir una función que calcule el promedio de tres números enteros y lo devuelva.
*/

#include <stdio.h>

int calcularPromedio(int num1, int num2, int num3) {
    int promedio = (num1 + num2 + num3) / 3;
    return promedio;
}

int main() {
    int numero1, numero2, numero3;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &numero3);

    int promedio = calcularPromedio(numero1, numero2, numero3);
    printf("El promedio de los tres números es: %d\n", promedio);

    return 0;
}