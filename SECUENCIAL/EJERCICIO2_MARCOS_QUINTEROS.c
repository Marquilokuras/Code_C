#include <stdio.h>

int main() {
	int numero1=0, numero2=0, resultado=0; 
	printf("Ingrese dos Numeros Enteros: \n");
	scanf("%d %d", &numero1 , &numero2);
	resultado = numero1 + numero2;
	printf("Resultado de la suma %d + %d es %d",numero1,numero2,resultado);
	return 0;
}
