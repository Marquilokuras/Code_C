/*Realice un programa que permita cargar el abecedario en un vector.
 Luego muestre el abecedario ingresado.*/
#include <stdio.h>
const int cantLetras = 29;
int main() {
	char abecedario[cantLetras];
	int contador = 0;
	do{
		printf("\nIngrese letra: \n");
		scanf(" %c",&abecedario[contador]);
		contador++;	
	}while(contador<cantLetras);
	
	printf("\nAbecedario ingresado:\n");
	for(int i = 0; i < cantLetras;i++){
		printf("\n %c\n",abecedario[i]);
	}
	
	return 0;
}

