/*Desarrollar un programa que muestre las opciones para realizar 
	
	
	Sumas sucesivas.
	Restas sucesivas.
	Productos sucesivos.
	Potencia
	Factorial
	
	
	Las opciones de suma, resta y producto deben permitir el ingreso de datos hasta que se ingresa un 0(Cero), realizar el calculo y mostrar el resultado.
	La opci�n de potencia debe solicitar el ingreso de una Base y un Exponente validando que se encuentren ambas entre 1 y 10, realizar el calculo y mostrar el resultado �sin utilizar la funci�n POW().�
	La opci�n factorial debe solicitar el ingreso de un numero validando que sea entre 1 y 10 y mostrar el resultado.
	
	
	El programa debe permitir al usuario elegir opciones del men� mientras lo desee.
	
*/
#include <stdio.h>

int main() {
	int numero = 0, exponente = 0, indice = 0;
	float resultado = 0;
	char opcionMenu = 's';  // Inicializaci�n para entrar en el bucle
	
	do {
		printf("\n***MENU***\n");
		printf("a) Sumas sucesivas\n");
		printf("b) Restas sucesivas\n");
		printf("c) Productos sucesivos\n");
		printf("d) Potencia\n");
		printf("e) Factorial\n");
		printf("s) Salir\n");
		printf("Elija una opci�n: ");
		scanf(" %c", &opcionMenu);
		
		switch(opcionMenu) {
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
			resultado = 0;  // Reiniciar el resultado para cada operaci�n
			do {
				printf("\nIngrese un n�mero (0 para finalizar): ");
				scanf("%d", &numero);
				
				switch(opcionMenu) {
				case 'a':
				case 'A':
					resultado += numero;
					break;
				case 'b':
				case 'B':
					resultado -= numero;
					break;
				case 'c':
				case 'C':
					if (resultado == 0)
						resultado = numero;
					else
						resultado *= numero;
					break;
				}
			} while (numero != 0);
			printf("\nResultado: %.1f\n", resultado);
			break;
			
		case 'd':
		case 'D':
			do {
				printf("\nIngrese la Base (entre 1 y 10): ");
				scanf("%d", &numero);
				printf("Ingrese el Exponente (entre 1 y 10): ");
				scanf("%d", &exponente);
			} while (numero < 1 || numero > 10 || exponente < 1 || exponente > 10);
			
			resultado = 1;
			for (indice = 1; indice <= exponente; indice++) {
				resultado *= numero;
			}
			
			printf("\n%d^%d = %.0f\n", numero, exponente, resultado);
			break;
			
		case 'e':
		case 'E':
			do {
				printf("\nIngrese un n�mero (entre 1 y 10): ");
				scanf("%d", &numero);
			} while (numero < 1 || numero > 10);
			
			resultado = 1;
			for (indice = 1; indice <= numero; indice++) {
				resultado *= indice;
			}
			
			printf("\n%d! = %.0f\n", numero, resultado);
			break;
			
		case 's':
		case 'S':
			printf("\nSaliendo del programa...\n");
			break;
			
		default:
			printf("\nOpci�n incorrecta. Intente de nuevo.\n");
			break;
		}
	} while (opcionMenu != 's' && opcionMenu != 'S');
	
	return 0;
}
