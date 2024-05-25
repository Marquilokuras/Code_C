#include <stdio.h>

int main() {
	int opcionMenu=0;
	float numeroA=0, numeroB=0, resultado=0;
	char opcionTerminacion = 'S';
	
	printf("Ingrese el primer numero: \n");
	scanf("%d",&numeroA);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&numeroB);

	while(opcionTerminacion == 'S' || opcionTerminacion == 's'){
		printf("**** BIENVENID@ ****\n");
		printf("1) SUMA \n");
		printf("2) RESTA \n");
		printf("3) MULTIPLICACION \n");
		printf("4) DIVISION \n");
		printf("Opcion: ");
		scanf("%d",&opcionMenu);
		
		switch(opcionMenu){
			case 1:
				resultado = numeroA + numeroB;
			break;
			case 2:
				resultado = numeroA - numeroB;
			break;
			case 3:
				resultado = numeroA * numeroB;
			break;
			case 4:
				if(numeroB != 0){
					resultado = numeroA / numeroB;
				}else{
					printf("No se permite la divison por cero");
				}
			break;
			default:
				printf("Opcion ingresada Incorrecta\n");
			break;
		}
		printf("Resultado: %d \n",resultado);
		printf("¿Desea seguir Operando?(S/N)\n");
		scanf(" %c", &opcionTerminacion);
		printf(" \n");
	}
	printf("**** FIN DEL PROGRAMADA ****");
	return 0;
}

