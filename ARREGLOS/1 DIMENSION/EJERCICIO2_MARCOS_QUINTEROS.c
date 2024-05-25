/*Realice un programa que permita cargar 5 números enteros en un vector. 
Luego calcule el promedio de ellos. 
Finalmente mostrar todos los valores y su promedio.*/

#include <stdio.h>

int main() {
	int listado[5],contador=0;
	
	do{
		printf("\nIngrese numero: \n");
		scanf("%d",&listado[contador]);
		contador++;	
	}while(contador<5);
	
	float promedio=0.0;
	
	for(int i = 0; i < 5;i++){
		promedio = promedio + listado[i];
	}
	
	promedio = promedio/5;
	
	printf("\nValores: \n");
	for(int i = 0; i < 5;i++){
		printf("\n%d\n",listado[i]);
	}
		printf("\nPromedio: %.2f",promedio);
	
	return 0;
}

