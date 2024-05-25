#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carga(int []);
void listar(int []);
void inverso(int []);

void carga(int listado[10]){
	srand(time(NULL)); 
	for (int i = 0; i < 10; i++) {
		listado[i] = rand() % 16 + 15; 
	}
}
	
void listar(int listado[10]){
	printf("\nListado en Orden:\n");
	for(int j = 0;j < 10;j++){
		printf("%d - ",listado[j]);
	}
}
void inverso(int listado[10]){
	printf("\nListado en Orden Inverso:\n");
	for(int i = 10 - 1; i >= 0; i--){
		printf("%d - ",listado[i]);	
	}
}

int main() {
	int listado[10] = {0};
	
	carga(listado);
	listar(listado);
	inverso(listado);
	
	return 0;
}


