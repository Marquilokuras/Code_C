#include <stdio.h>

int main() {
	int cantidadSaldos=0;
	float saldoProvedores=0,recaudo=0, promedioSaldos=0,menorSaldo=0,mayorSaldo=0;
	char opcionMenu = 'n';
	
	do{
		printf("Ingrese Saldo de Proveedor: \n");
		printf("Salir (saldo <= 0) \n");
		scanf("%f",&saldoProvedores);
		if(saldoProvedores>0){
			if(cantidadSaldos==0){
				menorSaldo = saldoProvedores;
			}
			cantidadSaldos++; //contador de la Cantidad de saldos
			recaudo=recaudo+saldoProvedores; //Recaudo de los saldos
			if(saldoProvedores <= menorSaldo && saldoProvedores != 0){
				menorSaldo = saldoProvedores; //menor saldo
			}else{
				if(saldoProvedores > mayorSaldo)
					mayorSaldo = saldoProvedores; //mayor saldo
			}
		}
	} while(saldoProvedores>0);
	
	do{
		printf("\nMenu\na) Cantidad de saldos cargados\nb) Promedio de Saldos\nc) Saldo Menor\nd) Saldo Mayor\ne) Calculo de recaudo en el Mes\nn) Salir\n");
		printf("Ingrese Opcion: \n");
		scanf(" %c",&opcionMenu);
			
		switch(opcionMenu){
			case 'a':
				printf("Cantidad de saldos cargados: %i\n",cantidadSaldos);
				break;
			case 'b':
				promedioSaldos= recaudo / cantidadSaldos;
				printf("Promedio de Saldos: %.2f\n",promedioSaldos);
				break;
			case 'c':
				printf("Menor saldo: %.2f\n",menorSaldo);
				break;
			case 'd':
				printf("Mayor saldo: %.2f\n",mayorSaldo);
				break;
			case 'e':
				printf("Recaudo del Mes: %.2f\n",recaudo);
				break;
			case 'n':
				printf("SALIENDO......");
				break;
			default:
				printf("Opcion incorrecta");
				break;
		}
	}while(opcionMenu != 'n');
	return 0;
}

