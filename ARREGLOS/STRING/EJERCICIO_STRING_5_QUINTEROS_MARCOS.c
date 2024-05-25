#include <stdio.h>
#include <string.h>
int main() {
	char alumnos[10][100],nombre[100];
	int posicion=0;
	for(int i=0;i<10;i++){
		printf("\nIngrese nombre:\n");
		fgets(alumnos[i],100,stdin);
	}
	printf("\nIngrese nombre a buscar:\n");
	fgets(nombre,100,stdin);
	
	for(int i=0;i<10;i++){
		if(strcmp(alumnos[i],nombre)==0){
			posicion++;
			printf("\nNombre encontrado en la posicion: %d\n",i);
		}
	}
	
	if(posicion!=1){
		printf("\nNombre inexistente\n");
	}
	return 0;
}

