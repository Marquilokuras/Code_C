/*
Realizar un programa que permita ingresar tres números enteros por el usuario 
y llamar a una función que devuelva la suma de los dos mayores. 
Utilizar paso por valor y dos funciones: una para obtener el mayor y otra para calcular la suma de los dos mayores.
*/

#include <stdio.h>

int obtenerMayor(int a, int b, int c) {
    int mayor = a;
    if (b > mayor)
        mayor = b;
    if (c > mayor)
        mayor = c;
    return mayor;
}

int sumaDosMaximos(int a, int b, int c) {
    int mayor1 = obtenerMayor(a, b, c);
    int mayor2;
    
    if (a == mayor1)
        mayor2 = obtenerMayor(b, c, c);
    else if (b == mayor1)
        mayor2 = obtenerMayor(a, c, c);
    else
        mayor2 = obtenerMayor(a, b, b);
    
    return mayor1 + mayor2;
}

int main() {
    int num1, num2, num3;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    
    int suma = sumaDosMaximos(num1, num2, num3);
    
    printf("La suma de los dos mayores números es: %d\n", suma);
    
    return 0;
}