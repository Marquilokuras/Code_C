/*Crear un programa que permita cargar un vector de 10 números enteros aleatorios entre el 15 y 30. 
Luego, mostrar los valores en orden inverso al ingresado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int listado[10] = {0};
	srand(time(NULL)); 
	
	for (int i = 0; i < 10; i++) {
		listado[i] = rand() % 16 + 15; 
	}
	
	printf("\nListado en Orden:\n");
	for(int j = 0;j < 10;j++){
		printf("%d - ",listado[j]);
	}
	
	printf("\nListado en Orden Inverso:\n");
	for(int i = 10 - 1; i >= 0; i--){
		printf("%d - ",listado[i]);
	}
	return 0;
}

