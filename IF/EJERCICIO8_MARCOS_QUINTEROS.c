#include <stdio.h>

int main() {
	int numero1=0, numero2=0, numero3=0;
	printf("Ingrese tres n�meros enteros: \n");
	scanf("%d %d %d",&numero1,&numero2,&numero3);
	if( numero1==numero2 && numero2==numero3){
		printf("Los tres n�meros son iguales");
	}else if(numero1 != numero2 && numero2 != numero3 && numero1 != numero3){
		printf("Los tres n�meros son distintos");
	}else{
		printf("Dos de los n�meros son iguales");
	}
	return 0;
}

