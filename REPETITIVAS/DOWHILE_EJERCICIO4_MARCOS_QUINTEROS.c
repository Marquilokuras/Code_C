#include <stdio.h>

int main() {
	int edad=0, montoTotal=0;
	
	do{
		
		printf("Ingrese edad: (0) para terminar\n");
		scanf("%d",&edad);
		
		if(edad < 0){
			printf("Edad ingresada incorrecta\n");
		}else{
			if(edad < 5 ){
				printf("La entrada es Gratis\n");
			}else{
				if(edad >=5 && edad <= 15){
					printf("La entrada cuesta $20\n");
					montoTotal = montoTotal + 20;
				}else{
					if(edad > 15)
						printf("La entrada cuesta $40\n");
					montoTotal = montoTotal + 40;
				}
			}
		}

	} while(edad != 0);
	
	printf("\nMonto Total a pagar: %d",montoTotal);
	return 0;
}

