#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void carga(int []);

void carga(int listado[20]){
	srand(time(NULL)); 
	for(int i=0;i < 20;i++){
		listado[i] = rand() % 2;
	}
}
	
void caraCruz(int listado[20]){
	int contCara=0, contCruz=0;
	
	for (int i = 0; i < 20; i++) {
		if (listado[i] == 0) {
			contCara++;
		} else {
			contCruz++;
		}
	}
	
	printf("Cantidad de veces que salio cara: %d\n", contCara);
	printf("Cantidad de veces que salio cruz: %d\n", contCruz);
}


int main() {
	int listado[20] = {0};
	
	carga(listado);
	caraCruz(listado);
	
	return 0;
}

