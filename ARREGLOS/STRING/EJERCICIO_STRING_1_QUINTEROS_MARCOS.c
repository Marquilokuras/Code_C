#include <stdio.h>
//Realice una función que recibe un string del usuario, lo invierte e 
//imprime el resultado. Maximo 100 caracteres
#include <string.h>	

int main() {
	
	char palabra[100];
	char letra;
	int longitud=0;
	
	printf("\nIngrese palabra: \n");
	fgets(palabra,100,stdin);
	
	longitud = strlen(palabra);
	for(int i=0;i<longitud/2;i++){
		letra = palabra[i];
		palabra[i] = palabra[longitud-i-1];
		palabra[longitud-i-1] = letra;
	}
	
	printf("\nString invertido:");
	puts(palabra);
	return 0;
}

