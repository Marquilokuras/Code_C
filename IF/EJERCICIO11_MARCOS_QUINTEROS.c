#include <stdio.h>

int main() {
	int diaPago=0;
	float montoFinal=0, montoCuota=0, recargo=0;
	printf("Ingrese Dia de Pago: \n");
	scanf("%d", &diaPago);
	printf("Ingrese Monto de la Cuota: \n");
	scanf("%f", &montoCuota);
	
	if(diaPago <= 10){
		printf("No se cobra recargo");
	}else{
		if(montoCuota > 5000){
			recargo = montoCuota/10; 
			montoFinal = montoCuota + recargo;
		}else{
			recargo = montoCuota*0.05; 
			montoFinal = montoCuota + recargo;
		}
		printf("Recargo de %.0f , y el valor final de la cuota es %.2f",recargo,montoFinal);
	}
	
	return 0;
}

