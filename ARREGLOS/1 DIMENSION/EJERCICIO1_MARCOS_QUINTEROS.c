#include <stdio.h>

int main() {
	int valores[5] = {1,2,3,4,5};
	
	for(int i = 1;i < 5;i=i+2){
		printf("Posicion %d , valor: %d\n",i,valores[i]);
	}
	
	return 0;
}

