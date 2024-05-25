#include <stdio.h>

int main() {
	int llamadaLocales=0, llamadaDistancia=0;
	float monto=0, montoFinal=0;
	
	printf("Ingrese cantidad de minutos de llamadas locales:\n");
	scanf("%d",&llamadaLocales);
	printf("Ingrese cantidad de minutos de llamadas a distancia:\n");
	scanf("%d",&llamadaDistancia);
	
	monto = llamadaLocales * 0.05 + llamadaDistancia * 0.1;
	if(llamadaLocales >= 1000 && llamadaDistancia >= 1000){
		montoFinal = monto - (monto*0.1);
		printf("Es beneficiario de la promoción, el monto a abonar en la proxima factura es de %.2f",montoFinal);
	}else{
		printf("No es beneficiario de la promoción");
	}
	return 0;
}


