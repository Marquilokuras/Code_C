#include <stdio.h>

int main() {
	int anio, mes;
	
	printf("Ingrese año: ");
	scanf("%d", &anio);
	
	printf("Ingrese mes (1-12): ");
	scanf("%d", &mes);
	
	int diasEnMes;
	switch (mes) {
	case 1:  
	case 3:  
	case 5:  
	case 7: 
	case 8: 
	case 10: 
	case 12: 
		diasEnMes = 31;
		break;
	case 4: 
	case 6:  
	case 9:  
	case 11: 
		diasEnMes = 30;
		break;
	case 2:  
		if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
			diasEnMes = 29;
		} else {
			diasEnMes = 28;
		}
		break;
	default:
		printf("Mes inválido.\n");
		return 1;
	}
	
	printf("\n*****%d/%d*****\n", mes, anio);
	
	for (int dia = 1; dia <= diasEnMes; dia++) {
		int tempMin = 0, tempMax = 0, sumaTemperaturas = 0;
		
		printf("\nDía %d\n", dia);
		
		for (int i = 0; i < 4; i++) {
			int temperatura;
			printf("Ingrese temperatura %d: ", i + 1);
			scanf("%d", &temperatura);
			
			sumaTemperaturas += temperatura;
			
			if (i == 0) {
				tempMin = temperatura;
				tempMax = temperatura;
			} else {
				if (temperatura < tempMin) {
					tempMin = temperatura;
				}
				if (temperatura > tempMax) {
					tempMax = temperatura;
				}
			}
		}
		
		float tempPromedio = (float)sumaTemperaturas / 4;
		
		printf("Temperatura máxima: Día %d - %d°C\n", dia, tempMax);
		printf("Temperatura mínima: Día %d - %d°C\n", dia, tempMin);
		printf("Promedio de temperatura: Día %d - %.2f°C\n", dia, tempPromedio);
	}
	
	return 0;
}

