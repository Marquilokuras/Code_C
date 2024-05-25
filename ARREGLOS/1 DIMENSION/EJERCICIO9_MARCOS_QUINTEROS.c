/*Realizar un programa que permita cargar un vector de 10 números enteros pares de manera aleatoria. 
Luego, mostrar la cantidad de valores impares que salieron pero que no se guardaron en el vector y 
mostrar el los 10 valores pares que salieron.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int listado[10] = {0}, cantidadImpares = 0, numeroAleatorio = 0;
	srand(time(NULL));
	
	for(int i=0; i < 10;i){
		numeroAleatorio = rand() % 1000;
		if(numeroAleatorio % 2 == 0){
			listado[i] = numeroAleatorio;
			i++;
		}else{
			cantidadImpares++;
		}
	}
	
	printf("Cantidad de valores impares: %d\n", cantidadImpares);
	
	printf("Valores pares que salieron:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d  ", listado[i]);
	}
	
	return 0;
}

