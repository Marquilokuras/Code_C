/*Realizar un programa que solicite al usuario ingresar valores de temperaturas del ambiente hasta que se ingrese '100'. 
Luego presente un menú de opciones para poder ver el máximo, el mínimo, el promedio, cantidad de temperaturas menores a 
cero, cantidad de temperaturas mayores a cero y cantidad iguales a cero.
El programa debe permitir al usuario elegir opciones del menú mientras lo desee.
*/
#include <stdio.h>
int main() {
	int tempMaxima = 0 , tempMinima = 0 , tempTotal=0, cantidadTempraturaMenores=0, cantidadTempraturaMayores=0, cantidadTempraturasCero=0, cantidadTemperaturas=0; 
	float temperatura=0,tempPromedio = 0;
	char opcionMenu = 'n';
	
	do{
		printf("Ingrese temperatura: \n Salida (100)\n");
		scanf("%f",&temperatura);
		if(temperatura != 100){
			if(cantidadTemperaturas == 0){ //minima temperatura
				tempMinima = temperatura;
			}
			
			if(temperatura < tempMinima){ //minima temperatura
				tempMinima = temperatura;
			}
				
			if(tempMaxima < temperatura){ //maxima temperatura
				tempMaxima = temperatura;
			}
			
			if(temperatura == 0){
				cantidadTempraturasCero++;
			}else if(temperatura < 0){
				cantidadTempraturaMenores++;
			}else{
				cantidadTempraturaMayores++;
			}
			cantidadTemperaturas++;
			tempTotal = tempTotal + temperatura; //sumatoria de temperaturas
		}
	}while(temperatura != 100);
	
	while(opcionMenu != 's' && cantidadTemperaturas !=0){
		printf("\n**Menu**\n");
		printf("a) Maximo y Minimo de las temperaturas\n");
		printf("b) Promedio de temperatura\n");
		printf("c) Temperaturas menores, mayores o iguales a cero\n");
		printf("s) Salir\n");
		scanf(" %c",&opcionMenu);
		switch(opcionMenu){
			case 'a':
				printf("Maximo %d y Minimo %d \n",tempMaxima,tempMinima);
				break;
			case 'b':
				tempPromedio = tempTotal / cantidadTemperaturas;
				printf("Temperatura Promedio: %.4f \n",tempPromedio);
				break;
			case 'c':
				printf("Temperaturas iguales a cero %d \nTemperaturas Menores a cero %d \nTemperaturas Mayores a cero %d",cantidadTempraturasCero,cantidadTempraturaMenores,cantidadTempraturaMayores);
				break;
			case 's':
				printf("Saliendo...\n");
				break;
			default:
				printf("Opcion Incorrecta\n");
				break;
		}
	} 
	
	return 0;
}

