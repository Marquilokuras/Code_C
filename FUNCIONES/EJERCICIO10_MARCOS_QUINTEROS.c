#include <stdio.h>
void convertirBinario(int);

void convertirBinario(int numero) {
	if (numero == 0) {
		return;
	}
	convertirBinario(numero / 2);
	printf("%d", numero % 2);
}

int main() {
	int numero=0;
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &numero);
	printf("La representaci�n binaria de %d es: ", numero);
	convertirBinario(numero);
	printf("\n");
	return 0;
}
