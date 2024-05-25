#include <stdio.h>
#include <stdbool.h>

bool iguales(int,int);

bool iguales(int numeroA, int numeroB){

	if(numeroA == numeroB){
		return true;
	}else{
		return false;
	};
	
}

int main() {
	int numeroA=0, numeroB=0;
	
	printf("Ingrese primer numero: ");
	scanf("%d", &numeroA);
	printf("Ingrese segundo numero: ");
	scanf("%d", &numeroB);
	
	bool resultado = iguales(numeroA,numeroB);
	
	if(resultado == true){
		printf("\nLos numeros ingresados son iguales");
	}else{
		printf("\nLos numeros ingresados son distintos");
	}
	
	return 0;
}

