#include <stdio.h>

#define NUM_LIBROS 2

void carga(int libros[NUM_LIBROS][4]) {
	libros[0][0] = 1; // Código del libro
	libros[1][0] = 2;
	libros[0][1] = 100; // Cantidad total de libros
	libros[1][1] = 200;
	libros[0][2] = 0; // Cantidad prestada
	libros[1][2] = 0;
	libros[0][3] = libros[0][1]; // Cantidad disponible
	libros[1][3] = libros[1][1];
}

void mostrarArreglo(int libros[NUM_LIBROS][4]) {
	printf("\nCódigo\tCant. Total\tCant. Prestado\tCant. Disponible\n");
	for (int i = 0; i < NUM_LIBROS; i++) {
		printf("%d\t%d\t\t%d\t\t%d\n", libros[i][0], libros[i][1], libros[i][2], libros[i][3]);
	}
}

void prestarLibro(int libros[NUM_LIBROS][4]) {
	int codigo, encontrado = 0;
	
	printf("\nIngrese el código del libro a prestar: ");
	scanf("%d", &codigo);
	
	for (int i = 0; i < NUM_LIBROS; i++) {
		if (libros[i][0] == codigo) {
			encontrado = 1;
			if (libros[i][3] > 0) {
				libros[i][2]++;
				libros[i][3]--;
				printf("\nPréstamo realizado con éxito.\n");
			} else {
				printf("\nNo hay libros disponibles para prestar.\n");
			}
			break;
		}
	}
	
	if (!encontrado) {
		printf("\nCódigo de libro no encontrado.\n");
	}
}

void menosMas(int libros[NUM_LIBROS][4]) {
	int maxPrestamos = libros[0][2], minPrestamos = libros[0][2];
	int codigoMax = libros[0][0], codigoMin = libros[0][0];
	
	for (int i = 1; i < NUM_LIBROS; i++) {
		if (libros[i][2] > maxPrestamos) {
			maxPrestamos = libros[i][2];
			codigoMax = libros[i][0];
		}
		if (libros[i][2] < minPrestamos) {
			minPrestamos = libros[i][2];
			codigoMin = libros[i][0];
		}
	}
	
	printf("\nLibro más solicitado: Código %d con %d préstamos.\n", codigoMax, maxPrestamos);
	printf("Libro menos solicitado: Código %d con %d préstamos.\n", codigoMin, minPrestamos);
}

void menu() {
	int libros[NUM_LIBROS][4] = {0};
	char opcion = 's';
	int bandera = 0;
	
	do {
		printf("\n**MENU**\na. Cargar los datos registrados en un arreglo.\nb. Mostrar los datos registrados en el arreglo.\nc. Prestar Libro.\nd. Mostrar el libro más solicitado y menos solicitado.\ns. Salir\n");
		printf("Ingrese una opción: ");
		scanf(" %c", &opcion);
		
		switch (opcion) {
		case 'a':
			carga(libros);
			bandera = 1;
			break;
		case 'b':
			if (bandera == 1) {
				mostrarArreglo(libros);
			} else {
				printf("\nSe deben cargar los datos antes.\n");
			}
			break;
		case 'c':
			if (bandera == 1) {
				prestarLibro(libros);
			} else {
				printf("\nSe deben cargar los datos antes.\n");
			}
			break;
		case 'd':
			if (bandera == 1) {
				menosMas(libros);
			} else {
				printf("\nSe deben cargar los datos antes.\n");
			}
			break;
		case 's':
			printf("\nSaliendo...\n");
			break;
		default:
			printf("\nOpción Incorrecta.\n");
			break;
		}
	} while (opcion != 's');
}

int main() {
	menu();
	return 0;
}
