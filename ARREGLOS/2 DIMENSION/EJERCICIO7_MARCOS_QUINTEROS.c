#include <stdio.h>

void ingresarEncuestas(int encuestas[][2], int *totalEncuestados, int maxEncuestas);
void calcularPorcentajes(int encuestas[][2], int totalEncuestados, float *porcentajeA, float *porcentajeB);

int main() {
	const int MAX_ENCUESTAS = 15;
	int encuestas[MAX_ENCUESTAS][2];
	int totalEncuestados = 0;
	float porcentajeA = 0.0, porcentajeB = 0.0;
	
	ingresarEncuestas(encuestas, &totalEncuestados, MAX_ENCUESTAS);
	
	calcularPorcentajes(encuestas, totalEncuestados, &porcentajeA, tajeB);
	
	printf("Cantidad total de encuestados: %d\n", totalEncuestados);
	printf("Porcentaje de aceptación del producto 'a': %.2f%%\n", porcentajeA);
	printf("Porcentaje de aceptación del producto 'b': %.2f%%\n", porcentajeB);
	
	return 0;
}

void ingresarEncuestas(int encuestas[][2], int *totalEncuestados, int maxEncuestas) {
	int a, b;
	for (int i = 0; i < maxEncuestas; i++) {
		printf("Ingrese la aceptación de los productos 'a' y 'b' (1 o 0) separados por espacio (o 9 para terminar): ");
		scanf("%d %d", &a, &b);
		
		if (a == 9) {
			break;
		}
		
		encuestas[i][0] = a;
		encuestas[i][1] = b;
		(*totalEncuestados)++;
	}
}

void calcularPorcentajes(int encuestas[][2], int totalEncuestados, float *porcentajeA, float *porcentajeB) {
	int aceptacionA = 0, aceptacionB = 0;
	
	for (int i = 0; i < totalEncuestados; i++) {
		if (encuestas[i][0] == 1) {
			aceptacionA++;
		}
		if (encuestas[i][1] == 1) {
			aceptacionB++;
		}
	}
	
	*porcentajeA = ((float)aceptacionA / totalEncuestados) * 100;
	*porcentajeB = ((float)aceptacionB / totalEncuestados) * 100;
}
