#include <stdio.h>

int main() {
	int temperatura=0;
	printf("Ingrese temperatura en grados:\n");
	scanf("%d",&temperatura);
	
	if(temperatura > 100)
		printf("Arriba del punto de ebullición del agua");
	else
		printf("Abajo del punto de ebullición del agua");

	return 0;
}

