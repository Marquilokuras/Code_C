#include <stdio.h>

int main() {
	char letra=' ';
	printf("Ingrese una Letra del Abecedario (en minuscula): ");
	scanf("%c", &letra);
	switch(letra){
	case 'a':
		printf("La letra ingresada es una Vocal");
		break;
	case 'e':
		printf("La letra ingresada es una Vocal");
		break;
	case 'i':
		printf("La letra ingresada es una Vocal");
		break;
	case 'o':
		printf("La letra ingresada es una Vocal");
		break;
	case 'u':
		printf("La letra ingresada es una Vocal");
		break;
	default:
		printf("La letra ingresada es una Consonante");
		break;
	}
	return 0;
}

