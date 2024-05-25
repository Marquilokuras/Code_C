#include <stdio.h>

void ingresarSaldos(float saldos[], int *cantidadEmpleados, float *totalMes) {
	float saldo = 0.0;
	*cantidadEmpleados = 0;
	*totalMes = 0.0;
	
	do {
		printf("\nIngrese saldo: \n");
		scanf("%f", &saldo);
		
		if (saldo <= 0) {
			break;
		} else {
			saldos[*cantidadEmpleados] = saldo;
			(*cantidadEmpleados)++;
			*totalMes += saldo;
		}
	} while (saldo > 0.0 || *cantidadEmpleados <= 50);
	
	printf("\nCantidad de saldos cargados: %d\n", *cantidadEmpleados);
}

float calcularPromedio(float saldos[], int cantidadEmpleados) {
	float promedio = 0.0;
	for (int i = 0; i < cantidadEmpleados; i++) {
		promedio += saldos[i];
	}
	promedio /= cantidadEmpleados;
	return promedio;
}

int contarSaldosMenores(float saldos[], int cantidadEmpleados, float promedio) {
	int saldosMenores = 0;
	for (int i = 0; i < cantidadEmpleados; i++) {
		if (saldos[i] < promedio)
			saldosMenores++;
	}
	return saldosMenores;
}

int contarSaldosMayores(float saldos[], int cantidadEmpleados, float promedio) {
	int saldosMayores = 0;
	for (int i = 0; i < cantidadEmpleados; i++) {
		if (saldos[i] > promedio)
			saldosMayores++;
	}
	return saldosMayores;
}

int main() {
	float saldos[50] = {0}, promedio = 0.0, totalMes = 0.0;
	int cantidadEmpleados = 0, saldosMenores = 0, saldosMayores = 0;
	
	ingresarSaldos(saldos, &cantidadEmpleados, &totalMes);
	promedio = calcularPromedio(saldos, cantidadEmpleados);
	printf("\nPromedio: %.2f\n", promedio);
	saldosMenores = contarSaldosMenores(saldos, cantidadEmpleados, promedio);
	printf("\nSaldos Menores al promedio: %d\n", saldosMenores);
	saldosMayores = contarSaldosMayores(saldos, cantidadEmpleados, promedio);
	printf("\nSaldos Mayores al promedio: %d\n", saldosMayores);
	printf("\nRecaudo del Mes: %.2f\n", totalMes);
	
	return 0;
}
