/*Una verdulería ofrece manzanas con distintos descuentos según los kg que el cliente compra. El precio normal del Kg de manzanas es de $459,00 x Kg., y los descuentos a aplicar son los siguientes:
	De 0kg a 2kg precio normal.
	De 2kg a 5kg 10% de descuento.
	De 5kg a 10kg 20% de descuento.
	De 10kg en adelante 30% de descuento.
	Realizar un programa que muestre en pantalla un menú con las   opciones
	1)Comprar manzanas
	2)Mostrar Ticket (Importe a abonar)
	3)Salir.
	La opción 1 permite ingresar la cantidad en kg que el cliente compró y calcular el monto según el descuento a aplicar.
	La opción 2 se debe mostrar el monto que el cliente debe abonar.
	La opción 3 finaliza el programa.
	Nota: En caso de seleccionar 2 veces la opción 1 el programa debe dar aviso que hay otra compra en progreso.
*/

#include <stdio.h>
//Quinteros Marcos

int main() {
	const float precioKg = 459.00;
	int kilos=0, opcionMenu=0, contadorProceso=0;
	float importe=0,total=0;
	
	do{
		printf("Ingrese cantidad de kilos de manzanas a llevar: \n");
		scanf("%d",&kilos);
		printf("\n***MENU***\n");
		printf("1) Comprar Manzanas\n");
		printf("2) Mostrar Ticket (Importe a Abonar)\n");
		printf("3) Salir\n");
		scanf("%d",&opcionMenu);
		switch(opcionMenu){
			case 1:
				contadorProceso++;
				if(contadorProceso != 2){
					if(kilos > 0){
						importe = kilos * precioKg;
						if (kilos > 2 && kilos <= 5){
							importe = importe - (importe / 10);
						} else if(kilos > 5 && kilos <= 10){
							importe = importe - ((importe / 10)*2);
						} else if(kilos > 10){
							importe = importe - ((importe / 10)*3);
						} 
						total=total+importe;
					}else {
						printf ("Valor de kilo ingresado incorrecto\n");
					}
				}else{
					printf("\nHay otra compra en progreso\n");
				}
				break;
			case 2:
				printf("\nImporte a abonar: %.2f\n",total);
				break;
			case 3:
				printf("\nSaliendo\n");
				break;
			default:
				printf("\nOpcion ingresada incorrecta\n");
				break;
		}
		
	
	}while(opcionMenu != 3);
	
	return 0;
}

