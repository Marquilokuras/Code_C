#include <stdio.h>

int main() {
	int nota = 1, notaMayor = 0, notaMenor = 0, cantidadAprobacion = 0, cantidadDesaprobadas = 0, contadorNotas =0;
	float promedio = 0;
	printf("Ingrese nota: \n");
	printf("Salida (0) \n");
	scanf("%d",&nota);
	notaMenor = nota;
	while(nota != 0){
		
		if(nota <= 10){
			if(nota > notaMayor){
				notaMayor = nota;
			}
			if(notaMenor > nota ){
				notaMenor = nota;
			}
			if(nota >= 4){
				cantidadAprobacion++;
			}else{
				cantidadDesaprobadas++;
			}
			promedio = promedio + nota;
			contadorNotas++;
		}else{
			printf("Valor de nota incorrecto (Rango Correcto 1-10)\n");
		}
		printf("Ingrese nota: \n");
		printf("Salida (0) \n");
		scanf("%d",&nota);
	}
	
	if(contadorNotas != 0 ){
		promedio = promedio / contadorNotas;
	}
	
	printf("*** MENU ***\n");
	printf("Nota Mayor: %d\n",notaMayor);
	printf("Nota Menor: %d\n",notaMenor);
	printf("Cantidad de Evaluaciones Aprobadas: %d\n",cantidadAprobacion);
	printf("Cantidad de Evaluaciones Desaprobadas: %d\n",cantidadDesaprobadas);
	printf("Promedio General: %.1f\n",promedio);
	
	return 0;
}

