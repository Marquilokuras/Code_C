#include <stdio.h>

void carga(int arreglo[4][5]){
	for(int i=0;i<=4;i++){
		arreglo[i][0] = i+1; 
		switch(i){
		case 0:
			arreglo[i][1] = 17;
			arreglo[i][2] = 100;
			arreglo[i][3] = 40;
			break;
		case 1:
			arreglo[i][1] = 19;
			arreglo[i][2] = 120;
			arreglo[i][3] = 42;
			break;
		case 2:
			arreglo[i][1] = 20;
			arreglo[i][2] = 95;
			arreglo[i][3] =	36;
			break;
		case 3:
			arreglo[i][1] = 25;
			arreglo[i][2] = 116;
			arreglo[i][3] = 41;
			break;
		}
	}
	
}

void mostrarArreglo(int arreglo[4][5]){
	printf("\n");
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 5; j++) {
			printf("[%d] ", arreglo[i][j]);
		}
		printf("\n"); 
	}
}
	
void calculoKm(int arreglo[4][5]){
	for(int i = 0; i < 4; i++) {
		arreglo[i][4] = arreglo[i][2] / arreglo[i][3];
	}
}
	
void busquedaMuestra(int arreglo[4][5]){
	int tipoCombustible = 0;
	float mejorCostoPorKm = -1;
	
	for (int i = 0; i < 4; i++) {
		float precioPorLitro = (float)arreglo[i][1];
		float kmPorLitro = (float)arreglo[i][2];
		
		if (kmPorLitro == 0) {
			continue; 
		}
		
		float costoPorKm = precioPorLitro / kmPorLitro;
		
		if (mejorCostoPorKm == -1 || costoPorKm < mejorCostoPorKm) {
			mejorCostoPorKm = costoPorKm;
			tipoCombustible = arreglo[i][0];
		}
	}
	
	printf("El mejor tipo de combustible en relación precio x kilómetros recorridos es: %d\n", tipoCombustible);
}
void menu(int arreglo[4][5]){
	char opcion='s';
	int bandera=0;
	do{
		printf("\n**MENU**\na. Cargar los datos registrados en un arreglo.\nb. Mostrar los datos registrados en el arreglo.\nc. Calcular los kilómetros por litro=kilómetros recorridos/litros utilizados.\nd. Buscar y mostrar cual es el mejor tipo de combustible en relación precio x kilómetros recorridos.\ns. Salir");
		printf("\nIngrese una opcion: \n");
		scanf(" %c",&opcion);
		switch(opcion){
			case 'a':
				carga(arreglo);
				bandera=1;
				break;
			case 'b':
				if(bandera == 1){
					mostrarArreglo(arreglo);
				}else{
					printf("\nSe deben cargar los datos antes\n");
				}
				break;
			case 'c':
				if(bandera == 1){
					calculoKm(arreglo);
				}else{
					printf("\nSe deben cargar los datos antes\n");
				}
				break;
			case 'd':
				if(bandera == 1){
					busquedaMuestra(arreglo);
				}else{
					printf("\nSe deben cargar los datos antes\n");
				}
				break;
			case 's':
				printf("\nSaliendo..\n");
				break;
			default:
			printf("\nOpcion Incorrecta\n");
			break;
		}
	}while(opcion != 's');
		
}

int main() {
	int arreglo[4][5]={0};
	
	menu(arreglo);
	return 0;
}

