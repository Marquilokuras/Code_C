#include <stdio.h>

int main() {
	int legajo=0,horarioIngreso=0,salidaAlmuerzo=0,reingreso=0,horarioSalida=0,horasSemanales=0,horasDia=0,dia=0,horasExtras=0;
	
	printf("Ingrese legajo: \n");
	scanf("%d",&legajo);
	do{
		do{
			printf("\nIngrese hora de ingreso:\n");
			scanf("%d",&horarioIngreso);
			do{
				printf("\nIngrese hora de salida para almorzar:\n");
				scanf("%d",&salidaAlmuerzo);
			}while(horarioIngreso >= salidaAlmuerzo);
			do{
				printf("\nIngrese hora de reingreso:\n");
				scanf("%d",&reingreso);
			}while(salidaAlmuerzo >= reingreso);
			do{
				printf("\nIngrese hora de salida:\n");
				scanf("%d",&horarioSalida);
			}while(reingreso >= horarioSalida);
		}while(horarioIngreso < 0 || salidaAlmuerzo < 0 || reingreso < 0 || horarioSalida < 0);
		
		dia++;
		printf("\nHoras ingresadas correctas\n");
		horasDia=(salidaAlmuerzo-horarioIngreso)+(horarioSalida-reingreso);
		printf("\nHorasTotales dia %d: %d\n",dia,horasDia);
		horasSemanales=horasSemanales+horasDia;
		
	}while(dia!=5);
	
	printf("\nHoras semanales: %d\n",horasSemanales);
	
	if(horasSemanales < 40){
		printf("\nHoras adecuadas en la semana 40 horas\n");
	}else{
		if(horasSemanales > 40){
			horasExtras=horasSemanales-40;
			printf("\nHoras extras: %d\n",horasExtras);
		}else{
			if(horasSemanales == 40)
				printf("\nCumple horas pactadas\n");
		}
	}
	
	return 0;
}

