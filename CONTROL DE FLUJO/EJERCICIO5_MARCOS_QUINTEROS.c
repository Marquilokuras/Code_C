#include <stdio.h>

int main() {
	int tipo=0; 
	float montoActual=0, montoResultante=0;
	printf("Ingrese Tipo de Tarjeta: ");
	scanf("%d", &tipo);
	printf("Ingrese Monto Actual: ");
	scanf("%f", &montoActual);
	printf("***** Bienvenid@ ***** \n");
	switch(tipo){
	case 1:
		printf("Saldo ingresado: %.2f \n",montoActual);
		montoResultante = montoActual + (2.5 * (montoActual/10));
		printf("Importe del 25, su nuevo saldo es de $ %.2f", montoResultante);
		break;
	case 2:
		printf("Saldo ingresado: %.2f \n",montoActual);
		montoResultante = montoActual + (3.5 * (montoActual/10));
		printf("Importe del 35, su nuevo saldo es de $ %.2f", montoResultante);
		break;
	case 3:
		printf("Saldo ingresado: %.2f \n",montoActual);
		montoResultante = montoActual + (4 * (montoActual/10));
		printf("Importe del 40, su nuevo saldo es de $ %.2f", montoResultante);
		break;
	default:
		printf("Saldo ingresado: %.2f \n",montoActual);
		montoResultante = montoActual + (5 * (montoActual/10));
		printf("Importe del 50, su nuevo saldo es de $ %.2f", montoResultante);
		break;
	}
	return 0;
}
