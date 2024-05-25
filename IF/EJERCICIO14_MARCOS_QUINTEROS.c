#include <stdio.h>

int main() {
	char inicialApellido=' ';
	int nota = 0;
	
	printf("Ingrese inicial del Apellido en Mayuscula: \n");
	scanf("%c",&inicialApellido);
	
	printf("Ingrese Nota: \n");
	scanf("%d",&nota);
	
	if(inicialApellido >= 'A' && inicialApellido <= 'M' && nota >= 7){
		printf("Le corresponde el Grupo A");
	}else{
		if(inicialApellido >= 'N' && inicialApellido <= 'Z' && nota >= 7){
			printf("Le corresponde el Grupo B");
		}else{
			if(inicialApellido >= 'A' && inicialApellido <= 'M' && nota < 7){
				printf("Le corresponde el Grupo C");
			}else{
				if(inicialApellido >= 'N' && inicialApellido <= 'Z' && nota < 7){
					printf("Le corresponde el Grupo D");
				}else{
					
				}
			}
		}
	}
	return 0;
}

