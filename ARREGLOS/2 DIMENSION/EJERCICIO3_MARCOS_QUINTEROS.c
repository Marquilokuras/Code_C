#include <stdio.h>

void carga(float arreglo[4][3]){
	float codigo=0,precioUnitario=0,cantidad=0;
	
	for(int i=0;i<=4;i++){
		int j=0;
			do{
				printf("\nIngrese Código: ");
				scanf("%f",&codigo);
				if(codigo<0){
					printf("\nNo se permiten codigos negativos\n");
				}else{
					arreglo[i][j] = codigo;
					j++;
				}
			}while(codigo<0);
			
			do{
				printf("\nIngrese Precio Unitario: ");
				scanf("%f",&precioUnitario);
				if(precioUnitario<0){
					printf("\nNo se permiten valores negativos\n");
				}else{
					arreglo[i][j] = precioUnitario;
					j++;
				}
			} while(precioUnitario<0);
			
			do{
				printf("\nIngrese Cantidad de Productos: ");
				scanf("%f",&cantidad);
				if(cantidad<0){
					printf("\nNo se permiten valores negativos, ni cero\n");
				}else{
					arreglo[i][j] = cantidad;
					j++;
				}
			} while(cantidad<=0);
			
			
	}	
}
	
void calculoSubtotalTotal(float arreglo[4][3] , float *total){
	for(int i=0;i<=4;i++){
		arreglo[i][3] = arreglo[i][1] * arreglo[i][2];
		*total = *total + arreglo[i][3] ;
	}
}
	
	void mostrarFactura(float arreglo[5][3], float total, char formaPago){
		printf("\n========== FACTURA ==========\n");
		printf("%-10s %-15s %-10s %-10s\n", "Código", "Precio Unitario", "Cantidad", "Subtotal");
		for(int i=0; i<5; i++){
			printf("%-10.0f %-15.2f %-10.0f %-10.2f\n", arreglo[i][0], arreglo[i][1], arreglo[i][2], arreglo[i][3]);
		}
		printf("\nTotal a abonar: $%.2f\n", total);
		printf("Forma de Pago: ");
		switch(formaPago){
		case 'e':
		case 'E':
			printf("Efectivo\n");
			break;
		case 'd':
		case 'D':
			printf("Débito\n");
			break;
		case 't':
		case 'T':
			printf("Tarjeta de Crédito\n");
			break;
		default:
			printf("Desconocido\n");
			break;
		}
	}	

int main() {
	float arreglo[4][3] = {0,0},total=0,pago=0,vuelto=0;
	char formaPago = 's';
	
	carga(arreglo);
	calculoSubtotalTotal(arreglo,&total);
	
	printf("\nTotal a abonar: %.2f",total);
	printf("\nIngrese Forma de Pago: \ne. Efectivo\nd. Debito\nt. Tarjeta\n");
	scanf(" %c",&formaPago);
	switch(formaPago){
		case 'e':
		case 'E':
			do{
				printf("\nIngrese monto a abonar por cliente:\n");
				scanf("%f",&pago);
				if(pago > total){
					vuelto = pago - total;
					printf("\nVuelto a entregar: $%.2f",vuelto);
				}else if(pago < total){
					printf("\nMonto menor al total a pagar\n");
				}
			}while(pago < total);
			printf("\nPago efectuado correctamente\n");
			break;
		case 'd':
		case 'D':
			do{
				printf("\nIngrese monto a abonar por cliente:\n");
				scanf("%f",&pago);
				if(pago < total){
					printf("\nMonto menor al total a pagar\n");
				}
			}while(pago < total);
			printf("\nPago efectuado correctamente\n");
			break;
		case 't':
		case 'T':
			do{
				total = total * 1.05;
				printf("\nTotal a abonar con tarjeta de credito: $%.2f",total);
				printf("\nIngrese monto a abonar por cliente:\n");
				scanf("%f",&pago);
				if(pago < total){
					printf("\nMonto menor al total a pagar\n");
				}
			}while(pago < total);
			printf("\nPago efectuado correctamente\n");
			break;
	}
	
	
	
	
	mostrarFactura(arreglo, total, formaPago);
	return 0;
}

