#include <stdio.h>

int main() {
	float metro=0, km=0;
	printf("Ingrese el Numero de Metros a convertir a Kilometros: ");
	scanf("%f", &metro);
	km = metro / 1000;
	printf("El valor %.2f m en kilometros es de %.2f km",metro,km);
	return 0;
}

