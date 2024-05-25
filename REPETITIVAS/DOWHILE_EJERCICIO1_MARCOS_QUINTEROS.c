#include <stdio.h>

int main() {
	
	int cantidadPersonas=0, edad=0;
	float promedioEdades=0;
	char fin = ' ';
	
	do{
		cantidadPersonas++;
		printf("\nIngrese edad: ");
		scanf("%d",&edad);
		promedioEdades = promedioEdades + edad;
		printf("\nDesea seguir cargando edades: \n");
		scanf(" %c",&fin);
	} while(fin == 's' || fin == 'S');
	
	promedioEdades = promedioEdades / cantidadPersonas;
	printf("\nPromedio de edades: %.1f",promedioEdades);
	return 0;
}

