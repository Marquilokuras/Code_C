/*
Crear un programa con un menú de opciones en la cual calculen las áreas y perímetros de las figuras geométricas. Para cada cálculo implementar una función. (cuadrado, rectángulo, círculo)
*/

#include <stdio.h>

//Creacion de funciones
float calcularAreaCuadrado(float lado);
float calcularPerimetroCuadrado(float lado);
float calcularAreaRectangulo(float base, float altura);
float calcularPerimetroRectangulo(float base, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);

//Declaracion de funciones
float calcularAreaCuadrado(float lado) {
    return lado * lado;
}

float calcularPerimetroCuadrado(float lado) {
    return 4 * lado;
}

float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

float calcularPerimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

float calcularAreaCirculo(float radio) {
    return 3.1416 * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
    return 2 * 3.1416 * radio;
}


int main() {
    int opcion;
    float lado = 0, base = 0, altura = 0, radio = 0;

    do {
        // Mostrar menú de opciones
        printf("Seleccione una opción:\n");
        printf("1. Calcular área y perímetro de un cuadrado\n");
        printf("2. Calcular área y perímetro de un rectángulo\n");
        printf("3. Calcular área y perímetro de un círculo\n");
        printf("0. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &lado);
                printf("El área del cuadrado es: %.2f\n", calcularAreaCuadrado(lado));
                printf("El perímetro del cuadrado es: %.2f\n", calcularPerimetroCuadrado(lado));
                break;
            case 2:
                printf("Ingrese la base del rectángulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del rectángulo: ");
                scanf("%f", &altura);
                printf("El área del rectángulo es: %.2f\n", calcularAreaRectangulo(base, altura));
                printf("El perímetro del rectángulo es: %.2f\n", calcularPerimetroRectangulo(base, altura));
                break;
            case 3:
                printf("Ingrese el radio del círculo: ");
                scanf("%f", &radio);
                printf("El área del círculo es: %.2f\n", calcularAreaCirculo(radio));
                printf("El perímetro del círculo es: %.2f\n", calcularPerimetroCirculo(radio));
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }
    } while (opcion != 0);

    return 0;
}

