#include <stdio.h>

int main() {
	char nombre[40];
	int anio=0, edad=0;
	printf("Ingrese el Nombre:\n");
	scanf("%s", nombre);
	printf("Ingrese el Año de Nacimiento:\n");
	scanf("%d", &anio);
	edad = 2024 - anio;
	printf("Nombre: %s\n",nombre);
	printf("Edad: %d\n",edad);
	return 0;
}
