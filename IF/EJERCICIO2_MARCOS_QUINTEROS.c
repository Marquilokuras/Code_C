#include <stdio.h>

int main() {
	int numero1=0, numero2=0;
	printf("Ingrese dos N�meros Enteros: \n");
	scanf("%d %d", &numero1, &numero2);
	
	if(numero1 > numero2)
		printf("El n�mero %d es mayor que el numero %d",numero1, numero2);
	else
		if(numero2 > numero1)
			printf("El n�mero %d es mayor que el numero %d",numero2, numero1);
		else
			printf("Los n�meros son iguales");
	return 0;
}

