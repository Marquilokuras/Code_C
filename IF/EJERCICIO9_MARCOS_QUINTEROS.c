#include <stdio.h>

int main() {
	int ladoA=0, ladoB=0, ladoC=0;
	printf("Ingrese el valor del primer lado del tri�ngulo:\n");
	scanf("%d",&ladoA);
	printf("Ingrese el valor del segundo lado del tri�ngulo:\n");
	scanf("%d",&ladoB);
	printf("Ingrese el valor del tercer lado del tri�ngulo:\n");
	scanf("%d",&ladoC);
	
	if(ladoA == ladoB && ladoB == ladoC && ladoA == ladoC){
		printf("El tri�ngulo es Equilatero");
	}else if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC){
		printf("El tri�ngulo es Escaleno");
	}else{
		printf("El tri�ngulo es Is�sceles");
	}
	return 0;
}

