#include <stdio.h>

int main() {
	int numeroIngresado=0;
	printf("Ingrese un N�mero Entero: \n");
	scanf("%d", &numeroIngresado);
	
	if((numeroIngresado%2)==0)
		printf("El n�mero %d es par",numeroIngresado);
	else
		printf("El n�mero %d es impar",numeroIngresado);
	return 0;
}

