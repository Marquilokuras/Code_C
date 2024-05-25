#include <stdio.h>
#include <math.h>

int main() {
	int numero=0, opcionMenu=0;
	float resultado=0, coseno=0, seno=0, tangente=0;
	
	do{
		printf("*** MENU ***\n");
		printf("1) Elevar a la potencia de 2 un numero\n");
		printf("2) Raiz cuadrada de un numero\n");
		printf("3) Raiz cubica de un numero\n");
		printf("4) Calcular el seno, coseno y tangente de un angulo\n");
		printf("0) Salir del Programa\n");
		scanf("%d",&opcionMenu);
		if(opcionMenu!=0){
			printf("\nIngrese el numero o angulo a calcular:\n");
			scanf("%d",&numero);
		}
		
		switch(opcionMenu){
		case 1: 
			resultado = pow(numero,2);
			printf("\nResultado: %.1f\n",resultado);
		break;
		case 2: 
			resultado = sqrt(numero);
			printf("\nResultado: %.1f\n",resultado);
		break;
		case 3: 
			resultado = cbrt(numero);
			printf("\nResultado: %.1f\n",resultado);
		break;
		case 4:
			seno = sin(numero);
			coseno = cos(numero);
			tangente = tan(numero);
			printf("\nResultado: \nSeno: %.1f \nCoseno: %.1f\nTangente: %.1f\n",seno,coseno,tangente);
		break;
		}
		printf(" \n");
	} while(opcionMenu != 0);
	return 0;
}

