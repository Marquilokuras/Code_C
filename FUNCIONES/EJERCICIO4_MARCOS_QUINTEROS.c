#include <stdio.h>

int mayorNumero(int,int,int);
void menorNumero(int,int,int,int);

int mayorNumero(int numeroA,int numeroB,int numeroC){
	if(numeroA > numeroB && numeroB > numeroC){
		return numeroA;
	}else{
		if(numeroB > numeroA && numeroA > numeroC){
			return numeroB;
		}else{
			if(numeroC > numeroA && numeroC > numeroB){
				return numeroC;
			}
		}
	}
	return 0;
}

void menorNumero(int numeroA,int numeroB,int numeroC,int resutado){
	int menorValor=0;
	if(numeroA < numeroB && numeroB < numeroC){
		menorValor= numeroA;
	}else{
		if(numeroB < numeroA && numeroA < numeroC){
			menorValor = numeroB;
		}else{
			if(numeroC < numeroA && numeroC < numeroB){
				menorValor = numeroC;
			}
		}
	}
	printf("\nMayor valor: %d\nMenor Valor: %d",resutado,menorValor);
}
	
int main() {
	int numeroA=0, numeroB=0, numeroC=0,resultado=0;
	
	printf("Ingrese tres numeros: \n");
	scanf("%d %d %d",&numeroA,&numeroB,&numeroC);
	resultado = mayorNumero(numeroA,numeroB,numeroC);
	menorNumero(numeroA,numeroB,numeroC,resultado);
	return 0;
}

