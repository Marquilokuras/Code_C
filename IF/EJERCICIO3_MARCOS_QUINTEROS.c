#include <stdio.h>

int main() {
	int numero1=0, numero2=0;
	printf("Ingrese dos Números Enteros: \n");
	scanf("%d %d", &numero1, &numero2);
	
	if(numero2 != 0){
		if(numero1%numero2==0){
			printf("La división entre los números %d y %d es Exacta",numero1,numero2);
		}else{
			printf("La división entre los números %d y %d No es Exacta",numero1,numero2);
		}
	}else{
		printf("No se puede dividir si el divisor es cero");
	}
	return 0;
}

