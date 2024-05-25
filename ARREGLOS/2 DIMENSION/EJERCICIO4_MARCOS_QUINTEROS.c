#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaImpares(int matriz[5][5]){
	int suma=0;
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			if(matriz[i][j] % 2 == 1)
				suma = suma +matriz[i][j];
		}
	}
	return suma;
}
void imprimirPares(int matriz[5][5]){
	printf("\nMatriz:\n");
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			if(matriz[i][j] % 2 == 0)
				printf(" [%d] ",matriz[i][j]);
		}
	}
}
int busqueda(int matriz[5][5],int busquedaNum){
	int cantidadRepe = 0;
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			if(matriz[i][j]==busquedaNum)
				cantidadRepe++;
		}
	}
	return cantidadRepe;
}
void impresion(int matriz[5][5]){
	printf("\nMatriz:\n");
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			printf(" [%d] ",matriz[i][j]);
		}
		printf("\n ");
	}
}
	
float promedio(int matriz[5][5]){
	float promedio = 0;
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			promedio = promedio +matriz[i][j];
		}
	}
	promedio = promedio / 25;
	return promedio;
}

void mostrarTabla(int frecuencia[25][2], int filas) {
	printf("Número | Frecuencia\n");
	printf("-------------------\n");
	for (int i = 0; i < filas; i++) {
		printf("%6d | %10d\n", frecuencia[i][0], frecuencia[i][1]);
	}
}
	
void frecuencia(int matriz[5][5]){
	int frecuencia[25][2] = {0};
		
	// Contar la frecuencia de los números en la matriz
	int fila = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int num = matriz[i][j];
			int encontrado = 0;
			
			// Verificar si el número ya está en la matriz de frecuencia
			for (int k = 0; k < fila; k++) {
				if (frecuencia[k][0] == num) {
					frecuencia[k][1]++;
					encontrado = 1;
					break;
				}
			}
				
			if (!encontrado) {
				frecuencia[fila][0] = num;
				frecuencia[fila][1] = 1;
				fila++;
			}
		}
	}
		
	mostrarTabla(frecuencia, fila);
}
	
void menu(int matriz[5][5]){
	char opcion='s';
	int busquedaNum=0,sumaImp=0;
	float varPromedio=0;
	do{
	printf("\n**MENU**\na. Mostrar todos los valores\nb. Promedio de todos los valores del arreglo\nc. Buscar cuanto se repite un valor ingresado por el usuario\nd. Imprimir los valores pares\ne. Sumar los valores impares\nf. Crear arreglo de 25X2\ns. Salir");
	printf("\nIngrese una opcion: \n");
	scanf(" %c",&opcion);
	switch(opcion){
	case 'a':
		impresion(matriz);
		break;
	case 'b':
		varPromedio=promedio(matriz);
		printf("\nPromedio: %.2f\n",varPromedio);
		break;
	case 'c':
		printf("\nIngrese numero a buscar:\n");
		scanf("%d",&busquedaNum);
		 busquedaNum = busqueda(matriz,busquedaNum);
		printf("\nCantidad de repeticiones del numero solicitado es %d\n",busquedaNum);
		break;
	case 'd':
		imprimirPares(matriz);
		break;
	case 'e':
		sumaImp = sumaImpares(matriz);
		printf("\nEl resultado de la suma de impares es: %d\n",sumaImp);
		break;
	case 'f':
		frecuencia(matriz);
		break;
	default:
		printf("\nOpcion Incorrecta\n");
		break;
	
	}
	}while(opcion != 's');
	
}

int main() {
	int matriz[5][5] = {0,0};
	srand(time(NULL));
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			matriz[i][j] = rand()%100;
		}
	}
	
	menu(matriz);
	return 0;
}

