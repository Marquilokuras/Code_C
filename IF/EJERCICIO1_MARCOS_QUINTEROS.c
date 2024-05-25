#include <stdio.h>

int main() {
	int numeroIngresado=0;
	printf("Ingrese un Número Entero: \n");
	scanf("%d", &numeroIngresado);
	
	if((numeroIngresado%2)==0)
		printf("El número %d es par",numeroIngresado);
	else
		printf("El número %d es impar",numeroIngresado);
	return 0;
}

