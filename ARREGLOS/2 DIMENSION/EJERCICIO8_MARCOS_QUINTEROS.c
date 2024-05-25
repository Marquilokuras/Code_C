#include <stdio.h>

#define MAX_ELEMENTOS 4

void carga(int articulos[MAX_ELEMENTOS][4]) {
	for (int i = 0; i < MAX_ELEMENTOS; i++) {
		printf("\nIngrese Codigo: ");
		scanf("%d", &articulos[i][0]);
		articulos[i][2] = 0;
		printf("\nIngrese Cantidad Total: ");
		scanf("%d", &articulos[i][1]);
		articulos[i][3] = articulos[i][1];
		printf("\nCodigo: %d \nCantidad total: %d\nCantidad prestado: %d\nCantidad Disponible: %d\n", articulos[i][0], articulos[i][1], articulos[i][2], articulos[i][3]);
	}
}

void prestarElementos(int articulos[MAX_ELEMENTOS][4]) {
	int codigo, cantidadPrestar;
	
	printf("Elementos disponibles:\n");
	for (int i = 0; i < MAX_ELEMENTOS; i++) {
		if (articulos[i][3] > 0) {
			printf("Código: %d, Cantidad disponible: %d\n", articulos[i][0], articulos[i][3]);
		}
	}
	
	printf("Ingrese el código del elemento: ");
	scanf("%d", &codigo);
	printf("Ingrese la cantidad a prestar: ");
	scanf("%d", &cantidadPrestar);
	
	for (int i = 0; i < MAX_ELEMENTOS; i++) {
		if (articulos[i][0] == codigo && articulos[i][3] >= cantidadPrestar) {
			articulos[i][2] += cantidadPrestar;
			articulos[i][3] -= cantidadPrestar;
			printf("Se han prestado %d elementos con código %d.\n", cantidadPrestar, codigo);
			return;
		}
	}
	
	printf("No se pueden prestar más elementos de ese código.\n");
}

void mostrarDatos(int articulos[MAX_ELEMENTOS][4]) {
	printf("Datos registrados:\n");
	for (int i = 0; i < MAX_ELEMENTOS; i++) {
		printf("Código: %d, Cantidad total: %d, Cantidad prestado: %d, Cantidad disponible: %d\n", articulos[i][0], articulos[i][1], articulos[i][2], articulos[i][3]);
	}
}

int main() {
	int articulos[MAX_ELEMENTOS][4] = {0};
	carga(articulos);
	prestarElementos(articulos);
	mostrarDatos(articulos);
	return 0;
}
