#include <stdio.h>

int main() {
	int ladoA=0, ladoB=0, ladoC=0;
	printf("Ingrese el valor del primer lado del triángulo:\n");
	scanf("%d",&ladoA);
	printf("Ingrese el valor del segundo lado del triángulo:\n");
	scanf("%d",&ladoB);
	printf("Ingrese el valor del tercer lado del triángulo:\n");
	scanf("%d",&ladoC);
	
	if(ladoA == ladoB && ladoB == ladoC && ladoA == ladoC){
		printf("El triángulo es Equilatero");
	}else if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC){
		printf("El triángulo es Escaleno");
	}else{
		printf("El triángulo es Isósceles");
	}
	return 0;
}

