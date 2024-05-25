#include <stdio.h>

int main() {
	float ingreso=0;
	int edad=0;
	printf("Ingrese edad: \n");
	scanf("%d", &edad);
	printf("Ingrese ingreso mensual: \n");
	scanf("%f", &ingreso);
	
	if(edad > 25 && ingreso >= 200000){
		printf("El usuario puede tributar");
	}else{
		printf("El usuario No puede tributar");
	}
	
	return 0;
}

