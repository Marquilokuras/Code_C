#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carga(int []);

void carga(int listado[10]){
	int cantidadImpares = 0, numeroAleatorio = 0;
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
}
		
void pares(int listado[10]){
	printf("Valores pares que salieron:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d  ", listado[i]);
	}
	
}

int main() {
	int listado[10] = {0};
	
	carga(listado);
	pares(listado);
		
	
	return 0;
}

