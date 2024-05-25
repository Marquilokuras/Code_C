#include <stdio.h>

void carga(int [5]);
float promedioNumeros(int [5]);
void muestra(int [5],float);
	
void carga(int *listado){
	int contador = 0;	
	do{
		printf("\nIngrese numero: \n");
		scanf("%d",&listado[contador]);
		contador++;	
	}while(contador<5);
}
	
float promedioNumeros(int listado[5]){
	float promedio = 0.0;
	
	for(int i = 0; i < 5;i++){
		promedio = promedio + listado[i];
	}
		
	promedio = promedio/5;
		
	return promedio;
}
		
void muestra(int listado[5],float promedio){
	printf("\nPromedio: %.2f",promedio);
}

int main() {
	int listado[5];
	
	carga(&listado[5]);
	float promedio = promedioNumeros(&listado[5]);
	muestra(listado,promedio);
	
	return 0;
}

