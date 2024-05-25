#include <stdio.h>

void carga(int listado[5]);
void menorMayor(int listado[5]);

void carga(int listado[5]) {
	for (int i = 0; i < 5; i++) {
		printf("\nIngrese numero: \n");
		scanf("%d", &listado[i]);
	}
}

void menorMayor(int listado[5]) {
	int mayor = listado[0], menor = listado[0];
	
	for (int i = 1; i < 5; i++) {
		if (listado[i] > mayor) {
			mayor = listado[i];
		}
		
		if (listado[i] < menor) {
			menor = listado[i];
		}
	}
	
	printf("\nMayor: %d\nMenor: %d\n", mayor, menor);
}

int main() {
	int listado[5] = {0};
	
	carga(listado);
	menorMayor(listado);
	
	return 0;
}
