#include <stdio.h>

int main() {
	float mb=0, gb=0;
	printf("Ingrese el Numero de MB a convertir en GB: ");
	scanf("%f", &mb);
	gb = mb / 1024;
	printf("El valor %.2f mb en gigabyte es de %.2f gb",mb,gb);
	return 0;
}

