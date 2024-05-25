#include <stdio.h>

int main() {
	int zona=0; 
	float costo, pesoPaquete=0, gramos=0;
	printf("Ingrese la Zona a enviar el Paquete 1-4: ");
	scanf("%d", &zona);
	printf("Ingrese el Peso del Paquete en Kg: ");
	scanf("%f", &pesoPaquete);
	gramos = pesoPaquete * 1000;
	switch(zona){
		case 1:
			printf("Ubicacion: America del Norte y Central \n");
			costo = gramos * 30;
			printf("Costo del Envio: $ %.2f", costo);
			break;
		case 2:
			printf("Ubicacion: America del Sur\n");
			costo = gramos * 20;
			printf("Costo del Envio: $ %.2f", costo);
			break;
		case 3:
			printf("Ubicacion: Europa\n");
			costo = gramos * 70;
			printf("Costo del Envio: $ %.2f", costo);
			break;
		case 4: 
			printf("Ubicacion: Asia Y Oceania\n");
			costo = gramos * 100;
			printf("Costo del Envio: $ %.2f", costo);
			break;
	default:
			printf("Zona %d !No Valida!", zona);
			return 0;
	}
	return 0;
}
