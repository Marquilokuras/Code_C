#include <stdio.h>

int main() {
	int edad=0;
	printf("Ingrese edad: \n");
	scanf("%d", &edad);
	
	if(edad < 4){
		printf("Puede entrar gratis");
	}else{ 
	   if(edad >= 4 && edad<=18){
			printf("Debe abonar $100");
		}else{
			printf("Debe abonar $200");
		}
	}
		
	return 0;
}

