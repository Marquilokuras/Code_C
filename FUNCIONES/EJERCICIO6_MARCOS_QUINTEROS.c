#include <stdio.h>

void promedio(int,int,int);

void promedio(int numeroA,int numeroB, int numeroC){
	float promedio=0;
	
	promedio = (numeroA + numeroB + numeroC)/3;
	printf("\nPromedio: %.2f",promedio);
}

int main() {
	int numeroA=0, numeroB=0, numeroC=0;
	
	printf("Ingrese primer numero: \n");
	scanf("%d",&numeroA);
	printf("Ingrese segundo numero: \n");
	scanf("%d",&numeroB);
	printf("Ingrese tercer numero: \n");
	scanf("%d",&numeroC);
	promedio(numeroA,numeroB,numeroC);
	return 0;
}

