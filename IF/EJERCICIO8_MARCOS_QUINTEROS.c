#include <stdio.h>

int main() {
	int numero1=0, numero2=0, numero3=0;
	printf("Ingrese tres números enteros: \n");
	scanf("%d %d %d",&numero1,&numero2,&numero3);
	if( numero1==numero2 && numero2==numero3){
		printf("Los tres números son iguales");
	}else if(numero1 != numero2 && numero2 != numero3 && numero1 != numero3){
		printf("Los tres números son distintos");
	}else{
		printf("Dos de los números son iguales");
	}
	return 0;
}

