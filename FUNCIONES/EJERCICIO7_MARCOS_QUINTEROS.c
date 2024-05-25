#include <stdio.h>

int mayorNumero(int, int, int);
int sumaDosMayores(int, int, int);

int main() {
	int numeroA, numeroB, numeroC;
	
	printf("Ingrese primer numero: ");
	scanf("%d", &numeroA);
	printf("Ingrese segundo numero: ");
	scanf("%d", &numeroB);
	printf("Ingrese tercer numero: ");
	scanf("%d", &numeroC);
	
	int resultado = sumaDosMayores(numeroA, numeroB, numeroC);
	
	printf("La suma de los dos mayores numeros es: %d\n", resultado);
	
	return 0;
}

int mayorNumero(int numeroA, int numeroB, int numeroC) {
	int maximo = numeroA;
	
	if (numeroB > maximo) {
		maximo = numeroB;
	}
	
	if (numeroC > maximo) {
		maximo = numeroC;
	}
	
	return maximo;
}

int sumaDosMayores(int numeroA, int numeroB, int numeroC) {
	int maximo1 = mayorNumero(numeroA, numeroB, numeroC);
	int maximo2;
	
	if (maximo1 == numeroA) {
		maximo2 = mayorNumero(numeroB, numeroC, -1);
	} else if (maximo1 == numeroB) {
		maximo2 = mayorNumero(numeroA, numeroC, -1);
	} else {
		maximo2 = mayorNumero(numeroA, numeroB, -1);
	}
	
	return maximo1 + maximo2;
}
