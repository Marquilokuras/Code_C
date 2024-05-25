/*Se tiene un arreglo de 10 valores rellenado por defecto o aleatoriamente 
entre el (65 al 90). Luego generar un menú de opciones con las siguientes 
funciones:
sumar todos los valores.
calcular el promedio. (reutilizar la funcion anterior)
transformar los números en letras.*/


#include <stdio.h>

int sumarValores(int [10]);
void promedio(int [10]);
void transformar(int [10]);

int sumarValores(int vector[10]){
	int resultado = 0;
	for(int i=0;i < 10;i++){
		resultado = resultado + vector[i];
	}
	
	printf("\nResultado de la suma de todos los valores: %d",resultado);
	
	return resultado;
}
	
void promedio(int vector[10]){
	float promedio = 0;
	promedio = sumarValores(vector) / 10;
	printf("\nPromedio: %.2f",promedio);
}

void transformar(int vector[10]){
	for(int i = 0; i < 10 ; i++){
		printf(" %c ",vector[i]);
	}
}
	
int main() {
	
	int vector[10] = {66,78,90,72,79,69,81,87,83,85};
	char opcion = 's';
	
	do{
		printf("\n\n*** MENU ***\na. Sumar todos los valores\nb. Calcular Promedio\nc. Transformar los numeros en letras\ns. Salir\nElija una opcion: \n");
		scanf(" %c",&opcion);
		switch(opcion){
			case 'a':
					sumarValores(vector);
				break;
			case 'b':
					promedio(vector);
				break;
			case 'c':
					transformar(vector);
				break;
			case 's':
				printf("\nSaliendo...\n");
			break;
			default: 
				printf("\nOpcion ingresada incorrecta\n");
			break;
		}
	}while(opcion != 's');
		return 0;
}

