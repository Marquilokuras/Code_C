#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int numeroA=0, numeroB=0, resultadoCorrecto=0, resultadoUsuario=0, cantidadPreguntas=0, cantidadPreguntasCorrectas=0;
	char fin = ' ';
	srand(time(NULL));
	do{
		for(int i=0;i<10;i++){
			numeroA = rand() % 10;
		}
		for(int j=0;j<10;j++){
			numeroB = rand() % 10;
		}
		
		resultadoCorrecto = numeroA * numeroB;
		printf("Ingrese el resultado de la siguiente operacion: %d * %d\n",numeroA,numeroB);
		scanf("%d",&resultadoUsuario);
		
		if(resultadoCorrecto == resultadoUsuario){
			printf("\nResultado correcto\n");
			cantidadPreguntasCorrectas++;
		}else{
			printf("\nResultado Incorrecto");
			printf("\nSolucion: %d\n",resultadoCorrecto);
		}
		
		printf("\nDesea seguir cargando numeros: \n");
		scanf(" %c",&fin);	
		printf(" ");
		cantidadPreguntas++;
	} while(fin == 's' || fin == 'S');
	printf("\nCantidad de Preguntas Total: %d",cantidadPreguntas);
	printf("\nCantidad de Respuestas Correctas: %d",cantidadPreguntasCorrectas);
	return 0;
}

