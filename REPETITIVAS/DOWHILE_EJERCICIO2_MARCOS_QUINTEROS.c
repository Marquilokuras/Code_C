#include <stdio.h>

int main() {
	int cantidadPositivos=0, cantidadNegativos=0, numeroIngresado=0;
	char fin = ' ';
	
	do{
		printf("Ingrese numero: ");
		scanf("%d",&numeroIngresado);
		if(numeroIngresado > 0){
			cantidadPositivos++;
		}else{
			if(numeroIngresado < 0){
				cantidadNegativos++;
			}else{
				printf("\nEl cero no es un numero positivo ni negativo\n");
			}
		}
		printf("\nDesea seguir cargando numeros: \n");
		scanf(" %c",&fin);
	} while(fin == 's' || fin == 'S');
	
	printf("\nPositivos: %d",cantidadPositivos);
	printf("\nNegativos: %d",cantidadNegativos);
	return 0;
}

