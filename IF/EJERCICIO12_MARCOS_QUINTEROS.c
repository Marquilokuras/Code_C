#include <stdio.h>

int main() {
	float rentaAnual=0;
	printf("Ingrese su Renta Anual: \n");
	scanf("%f",&rentaAnual);
	
	if(rentaAnual < 20000){
		printf("Tipo Impositivo de 5%%");
	}else {
	   if(rentaAnual >= 20000 && rentaAnual < 30000){
			printf("Tipo Impositivo de 10%%");
		}else{
			if(rentaAnual >= 3000 && rentaAnual <= 40000){
				printf("Tipo Impositivo de 15%%");
			}else{
				if(rentaAnual > 40000)
					printf("Tipo Impositivo de 20%%");
			}
	    }
	}
	return 0;
}

