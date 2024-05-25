#include <stdio.h>

int main() {
	int numero1=0, numero2=0;
	printf("Ingrese dos Números Enteros: \n");
	scanf("%d %d", &numero1, &numero2);
	
	if(numero1 > numero2)
		printf("El número %d es mayor que el numero %d",numero1, numero2);
	else
		if(numero2 > numero1)
			printf("El número %d es mayor que el numero %d",numero2, numero1);
		else
			printf("Los números son iguales");
	return 0;
}

