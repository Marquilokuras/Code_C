#include <stdio.h>

int main() {
	float n=0 , m=0, resultado=0;
	int codigo=0;
	printf("Ingrese Dos Numeros para realizar las Operaciones: ");
	scanf("%f %f", &n ,&m);
	printf("Ingrese Codigo de Operacion 1-4: ");
	scanf("%d", &codigo);
	switch(codigo){
		case 1:
			resultado = n + m;
			break;
		case 2:
			resultado = n - m;
			break;
		case 3:
			resultado = n * m;
			break;
		case 4:
			resultado = n / m;
			break;
		default:
			printf("Valor de Codigo de Operacion Incorrecto");
			break;
	}
	printf("Resultado: %.2f", resultado);
	return 0;
}

