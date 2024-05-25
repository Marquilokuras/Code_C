/*Realizar un programa que permita ingresar valores numéricos positivos hasta que se ingrese un cero, 
debe procesar los datos y desplegar un menú con las siguientes opciones para obtener los resultados:
	
	a Máximo y mínimo valor ingresado.
	b Cantidad y promedio de valores impares.
	c Cantidad y promedio de valores pares.
	d Cantidad de números primos ingresados.
	
	El programa debe permitir al usuario elegir opciones del menú mientras lo desee.
	*/
#include <stdio.h>

int main() {
	
	int numero=0, max=0, min=0, cantPares=0, cantImpares=0, cantPrimos=0,cantNum=0;
	float promedioPar=0, promedioImpar=0;
	char opcionContinuacion = 's',opcionMenu = 's';
	do{
		printf("Ingrese numero: \n0 Salir\n");
		scanf("%d",&numero);
		
		if(numero != 0){
			if(numero < 0){
				printf("Valor ingresado incorrecto solo se permiten numeros positivos\n");
			}else{
				
				if(cantNum==0){ //min
					min = numero;
				}else if(numero < min){
					min = numero;
				}
				
				if(numero > max){ //max
					max = numero;
				}
				
				if(numero%2==0){ //Par y impar
					cantPares++;
					printf("Par\n");
				}else{
					cantImpares++;
					printf("Impar\n");
				}
				
				if(numero == 1 || numero == 2){
					cantPrimos++;
					printf("Es primo\n");
				}else{
					int esPrimo = 1;
					for(int i = 2; i <= numero / 2; i++) {
						if(numero % i == 0) {
							esPrimo = 0;
							break;
						}
					}
					
					if (esPrimo == 1){
						printf("%d es un número primo.\n", numero);
						cantPrimos++;
					}else{
						printf("%d no es un número primo.\n", numero);
					}
				}
				cantNum++;
				
			}
			
		}
		
	} while(numero != 0);
	
	do{
		printf("\n**Menu**\n");
		printf("a. Máximo y mínimo valor ingresado.\n");
		printf("b. Cantidad y promedio de valores impares.\n");
		printf("c. Cantidad y promedio de valores pares.\n");
		printf("d. Cantidad de números primos ingresados.\n");
		scanf(" %c",&opcionMenu);
		switch(opcionMenu){
		case 'a':
			printf("\n Maximo %d y Minimo %d",max,min);
			break;
		case 'b':
			promedioImpar = cantNum / cantImpares;
			printf("Cantidad %d y promedio %.2f \n",cantImpares,promedioImpar);
			break;
		case 'c':
			promedioPar = cantNum / cantPares;
			printf("Cantidad %d y promedio %.2f \n",cantPares,promedioPar);
			break;
		case 'd':
			printf("Cantidad de números primos ingresados %d\n",cantPrimos);
			break;
		default:
			printf("Opcion Incorrecta\n");
			break;
		}
		
		printf("\n¿Desea continuar (s/n)?\n");
		scanf(" %c",&opcionContinuacion);
	} while(opcionContinuacion != 'n');
	
	return 0;
}

