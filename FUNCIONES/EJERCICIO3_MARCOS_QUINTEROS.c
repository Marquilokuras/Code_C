#include <stdio.h>
#include <math.h>
#include <conio.h>

float areaCuadrado(float);
float perimetroCuadrado(float);
float areaRectangulo(float,float);
float perimetroRectangulo(float,float);
float areaCirculo(float);
float perimetroCirculo(float);

float areaCuadrado(float lado){
	return(lado*lado);
}
	
float perimetroCuadrado(float ladoA){
	return(ladoA*4);
}

float areaRectangulo(float base,float altura){
	return (base * altura);
}
float perimetroRectangulo(float lado,float ladoB){
	return(2*lado+2*ladoB);
}
float areaCirculo(float radio){
	return (3.14*pow(radio,2));
}

float perimetroCirculo(float radio){
	return (3.14*(2*radio));
}

int main() {
	char opcionMenu = 'e';
	float base=0.0,altura=0.0,resultado=0.0,lado=0.0,ladoB=0.0,radio=0.0;
	printf("Menu\na) Area Cuadrado\nb) Perimetro Cuadrado\nc) Area Rectangulo\nd) Perimetro Rectangulo\ne) Area Circulo\nf) Perimetro Circulo\n");
	scanf(" %c",&opcionMenu);
	
	switch(opcionMenu){
	case 'a':
		printf("\nIngrese lado:\n");
		scanf("%f",&lado);
		resultado = areaCuadrado(lado);
		printf("\nArea del Cuadrado: %.2f",resultado);
		break;
		
	case 'b':
		printf("\nIngrese un lado:\n");
		scanf("%f",&lado);
		resultado = perimetroCuadrado(lado);
		printf("\nPerimetro del Cuadrado: %.2f",resultado);
		break;
	case 'c':
		printf("\nIngrese base:\n");
		scanf("%f",&base);
		printf("\nIngrese altura:\n");
		scanf("%f",&altura);
		resultado = areaRectangulo(base,altura);
		printf("\nArea del Rectangulo: %.2f",resultado);
		break;
	case 'd':
		printf("\nIngrese un lado:\n");
		scanf("%f",&lado);
		printf("\nIngrese segundo lado:\n");
		scanf("%f",&ladoB);
		resultado = perimetroRectangulo(lado,ladoB);
		printf("\nPerimetro del Rectangulo: %.2f",resultado);
		break;
	case 'e':
		printf("\nIngrese su radio:\n");
		scanf("%f",&radio);
		resultado = areaCirculo(radio);
		printf("\nArea del Circulo: %.2f",resultado);
		break;
	case 'f':
		printf("\nIngrese su radio:\n");
		scanf("%f",&radio);
		resultado = perimetroCirculo(radio);
		printf("\nPerimetro del Circulo: %.2f",resultado);
		break;
	}
	return 0;
}

