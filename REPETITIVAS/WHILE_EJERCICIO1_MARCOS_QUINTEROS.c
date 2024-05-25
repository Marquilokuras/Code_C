#include <stdio.h>

int main() {
	int numeroIngresado=1, contador=0;
	printf("Ingrese numero: \n");
	printf("Salida (0) \n");
	scanf("%d",&numeroIngresado);
	
	while(numeroIngresado != 0){
		if(numeroIngresado == 10)
			contador++;
		printf("Ingrese numero: \n");
		printf("Salida (0) \n");
		scanf("%d",&numeroIngresado);
	}
	printf("Cantidad de repeticiones del numero 10: %d",contador);
	
	return 0;
}

