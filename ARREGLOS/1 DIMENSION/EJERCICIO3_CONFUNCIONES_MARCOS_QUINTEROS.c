#include <stdio.h>

void carga(char[]);
void muestra(char[]);

void carga(char abecedario[]){
	for (int i = 0; i < 26; i++){
		printf("Ingrese letra %d: ", i+1);
		scanf(" %c", &abecedario[i]);
	}
}
	
void muestra(char abecedario[]){
	printf("\nAbecedario ingresado:\n");
	for (int i = 0; i < 26; i++){
		printf(" %c\n", abecedario[i]);
	}
}
		
int main() {
	char abecedario[26];
			
	carga(abecedario);
			
	muestra(abecedario);
			
	return 0;
}
		
