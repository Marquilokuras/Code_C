#include <stdio.h> //code correcto 2 - 5 - 7 - 9

int esCodigoCorrecto(int codigo[4]) {
	int A = codigo[0];
	int B = codigo[1];
	int C = codigo[2];
	int D = codigo[3];
	
	
	if (A == B || A == C || A == D || B == C || B == D || C == D) {
		return 0;
	}
	
	if (A + B + C + D != 23) {
		return 0;
	}
	
	if ((A * B) - D + C != 8) {
		return 0;
	}
	
	if (D - A - B - C != -5) {
		return 0;
	}
	
	if (A - B + C + D != 13) {
		return 0;
	}
	
	return 1;
}

int main() {
	int codigo[4] = {0},intentos=0;
	
	do{
		
		printf("\nIngrese codigo de 4 digitos:\n");
		
		for (int i = 0; i < 4; i++) {
			printf("Ingrese numero de codigo %d: ", i + 1);
			scanf("%d", &codigo[i]);
		}
		
		if (esCodigoCorrecto(codigo)==1) {
			printf("\nCODIGO CORRECTO\n");
			break;
		} else {
			printf("\nCodigo incorrecto.\n");
			intentos++;
		}
		
	} while(intentos!=3);
	
	if(intentos==3){
		printf("\nACCESO DENEGADO\n");
	}
	
	return 0;
}

