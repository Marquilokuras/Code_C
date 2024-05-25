/*Crear un arreglo de 10 números enteros y aleatorios.
Luego mostrar los valores pares*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	int listado[10] = {0};
	int contadorImpares=0;
	srand(time(NULL)); 
	
	for(int i=0;i < 10;i++){
		listado[i] = rand() % 100;
	}
	
	for(int i=0;i < 10;i++){
		if(listado[i]%2==0){
			printf("\nNumero par: %d",listado[i]);
		}else{
			contadorImpares++;
		}
	}
	
	printf("\nCantidad Impares: %d",contadorImpares);
	
	return 0;
}

