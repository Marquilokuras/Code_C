#include <stdio.h>

int factorial(int n) {
	int resultado = 1;
	for(int i = 1; i <= n; i++) {
		resultado *= i;
	}
	return resultado;
}

int main() {
	int num;
	printf("Introduce un n�mero entero: ");
	scanf("%d", &num);
	
	if(num < 0)
		printf("Error! El factorial de un n�mero negativo no existe.\n");
	else
		printf("El factorial de %d es %d\n", num, factorial(num));
	
	return 0;
}
