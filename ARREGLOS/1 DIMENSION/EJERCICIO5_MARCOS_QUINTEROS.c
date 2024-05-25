#include <stdio.h>

int main() {
	float saldos[50] = {0},saldo = 0.0, promedio = 0.0,totalMes = 0.0;
	int cantidadEmpleados = 0, saldosMenores = 0,saldosMayores = 0;
	do{
		printf("\nIngrese saldo: \n");
		scanf("%f",&saldo);
		if(saldo<=0){
			break;
		}else{
			saldos[cantidadEmpleados] = saldo;
			cantidadEmpleados++;
			totalMes = totalMes + saldo;
		}
	} while(saldo > 0.0 || cantidadEmpleados <= 50);
	
	printf("\ncantidad de saldos cargados: %d\n",cantidadEmpleados);
	
	for(int i = 0;i < cantidadEmpleados;i++){
		promedio = promedio + saldos[i];
	}
			
	promedio =  promedio / cantidadEmpleados;
	printf("\nPromedio: %.2f\n",promedio);
			
	for(int i = 0;i < cantidadEmpleados;i++){
		if(saldos[i]< promedio)
			saldosMenores++;
	}
	printf("\nSaldos Menores al promedio: %d\n",saldosMenores);
			
	for(int i = 0;i < cantidadEmpleados;i++){
		if(saldos[i] > promedio)
			saldosMayores++;
	}
	printf("\nSaldos Mayores al promedio: %d\n",saldosMayores);
	
	printf("\nRecaudo del Mes: %.2f\n",totalMes);
	
	return 0;
}

