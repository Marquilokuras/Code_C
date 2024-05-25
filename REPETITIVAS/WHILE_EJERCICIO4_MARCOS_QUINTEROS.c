#include <stdio.h>

int main() {
	float importeArticulo=0, importeTotal=0;
	char clientes = 'S';
	while(clientes == 'S' || clientes == 's'){
		printf("Ingrese importe del Articulo: \n");
		scanf("%f", &importeArticulo);
		while(importeArticulo != 0){
			importeTotal = importeTotal + importeArticulo;
			printf("Ingrese importe del Articulo: \n");
			printf("Salida (0):\n");
			scanf("%f", &importeArticulo);
		}
		
		if(importeTotal >= 50 && importeTotal <= 120){
			importeTotal = importeTotal - (importeTotal * 0.15);
			printf("\nDescuento del 15%%\n");
		}else{
			if(importeTotal > 120)
			importeTotal = importeTotal - (importeTotal * 0.2);
			printf("\nDescuento del 20%%\n");
		}
		
		printf("¿Más clientes (S/N)?\n");
		scanf(" %c", &clientes);
		printf("\nSuma total de importes: %.2f \n",importeTotal);
		printf("\n");
	}
	
	return 0;
}

