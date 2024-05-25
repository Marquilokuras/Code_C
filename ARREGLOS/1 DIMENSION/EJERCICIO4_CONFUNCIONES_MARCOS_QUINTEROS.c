#include <stdlib.h>
#include <stdio.h>
#include <time.h>
	

void llenarArreglo(int arreglo[], int tamanio) {
	srand(time(NULL));
	for (int i = 0; i < tamanio; i++) {
		arreglo[i] = rand() % 100;
	}
}
	
int contarImpares(int arreglo[], int tamanio) {
	int contadorImpares = 0;
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] % 2 != 0) {
				contadorImpares++;
		}
	}
	return contadorImpares;
}
	
void imprimirPares(int arreglo[], int tamanio) {
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] % 2 == 0) {
			printf("\nNumero par: %d", arreglo[i]);
		}
	}
}
	
int main() {
	int listado[10] = {0};
	int contadorImpares;
		
	llenarArreglo(listado, 10);
	imprimirPares(listado, 10);
	contadorImpares = contarImpares(listado, 10);
	printf("\nCantidad Impares: %d", contadorImpares);
		
	return 0;
}
