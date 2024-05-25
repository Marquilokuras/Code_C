#include <stdio.h>

void suma(int,int);
void resta(int,int);
void multiplicacion(int,int);
void division(int,int);

void suma(int numeroA,int numeroB){
	int resultado = numeroA + numeroB;
	printf("\nResultado suma: %d",resultado);
}
	
void resta(int numeroA,int numeroB){
	int resultado = numeroA - numeroB;
	printf("\nResultado resta: %d",resultado);
}

void multiplicacion(int numeroA,int numeroB){
	int resultado = numeroA * numeroB;
	printf("\nResultado multiplicacion: %d",resultado);
}
void division(int numeroA,int numeroB){
	int resultado = numeroA / numeroB;
	printf("\nResultado division: %d",resultado);
}

int main() {
	int numeroA=0,numeroB=0;
	char opcionMenu = 'e';
	printf("Ingrese numeros a calcular\n");
	scanf("%d %d",&numeroA,&numeroB);
	
	printf("\nMenu\na) Sumar dos numeros\nb) Restar dos numeros\nc) Multilpicar dos numeros\nd) Dividir dos numeros\n");
	scanf(" %c",&opcionMenu);
	
	switch(opcionMenu){
		case 'a':
			suma(numeroA,numeroB);
			break;
		case 'b':
			resta(numeroA,numeroB);
			break;
		case 'c':
			multiplicacion(numeroA,numeroB);
			break;
		case 'd':
			division(numeroA,numeroB);
			break;
	}
	
	return 0;
}

