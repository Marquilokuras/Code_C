#include <stdio.h>

int esPar(int);

int esPar(int numero){
	if(numero % 2 == 0){
		return 0;
	}else{
		return 1;
	}
}

int main() {
	int numero=0, bandera=0;
	printf("Ingrese un numero: \n");
	scanf("%d",&numero);
	bandera = esPar(numero);
	if(bandera == 0){
		printf("\nEs PAR");
	}else{
		printf("\nEs IMPAR");
	}
	return 0;
}


