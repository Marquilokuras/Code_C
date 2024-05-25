#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	int listado[20] = {0};
	srand(time(NULL)); 
	int contCara=0, contCruz=0;
	
	for(int i=0;i < 20;i++){
		listado[i] = rand() % 2;
	}
	
	for (int i = 0; i < 20; i++) {
		if (listado[i] == 0) {
			contCara++;
		} else {
			contCruz++;
		}
	}
	
	printf("Cantidad de veces que salio cara: %d\n", contCara);
	printf("Cantidad de veces que salio cruz: %d\n", contCruz);
	
	return 0;
}

