#include <stdio.h>
#include <math.h>

int main() {
	float hipo=0, catA=0, catB=0;
	printf("Ingrese un valor para el cateto A:\n");
	scanf("%f", &catA);
	printf("Ingrese un valor para el cateto B:\n");
	scanf("%f", &catB);
	hipo = sqrt(pow(catA,2) + pow(catB,2));
	printf("La hipotenusa del Triangulo con los catatetos %.2f y %.2f es : %.2f",catA,catB,hipo);
	return 0;
}
