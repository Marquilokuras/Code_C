#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int numeros[5][4],int cantidadCorrectas){
	printf("\nMultiplicando	|	Multiplicador			|	Producto Alumno			|	Producto Correcto\n");
	for(int i = 0; i<5;i++){
		printf("\n%d		|		%d			|		%d			|	%d\n",numeros[i][0],numeros[i][1],numeros[i][2],numeros[i][3]);
	}
	
	if(cantidadCorrectas==5){
		printf("\n¡Felicitaciones!\n");
	}else{
		if(cantidadCorrectas >= 3 && cantidadCorrectas<=4){
			printf("\n¡Bien!, Vas por buen camino.\n");
		}else{
			printf("\nHay que practicar más.\n");
		}
	}
}

void carga(int numeros[5][4]){
	srand(time(NULL));
	int primerNumero = 0, segundoNumero=0,respuestaAlumno=0,respuestaCorrecta=0,cantidadCorrectas=0;
	for(int i = 0; i<5;i++){
		primerNumero = rand()%10;
		segundoNumero = rand()%10;
		printf("\nCuanto es %d veces %d?\n",primerNumero,segundoNumero);
		scanf("%d",&respuestaAlumno);
		respuestaCorrecta = primerNumero * segundoNumero;
		numeros[i][0]=primerNumero;
		numeros[i][1]=segundoNumero;
		numeros[i][2]=respuestaAlumno;
		numeros[i][3]=respuestaCorrecta;
		if(respuestaAlumno != respuestaCorrecta){
			printf("\nRespuesta incorrecta\nLa respuesta correcta es: %d\n",respuestaCorrecta);
		}else{
			cantidadCorrectas++;
		}
	}
	
	imprimir(numeros,cantidadCorrectas);
	
}

int main(int argc, char *argv[]) {
	int numeros[5][4] = {0};
	
	carga(numeros);
	
	
	return 0;
}

