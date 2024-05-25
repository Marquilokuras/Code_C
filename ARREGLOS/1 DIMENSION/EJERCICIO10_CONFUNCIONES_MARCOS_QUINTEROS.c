#include <stdio.h>

void menu(int[], int);
void menorMayor(int[]);
void cantidadNotas(int[]);
void cantidadADA(int[], int); //Cantidad de aprobados desaprobados y ausentes

void carga(int notasAlumnos[20], int *cantAusentes) {
	int nota = 0, cantNotas = 0;
	
	for (int i = 0; i < 20; i++) {
		printf("\nIngrese nota:\n");
		scanf("%d", &nota);
		
		if (nota == -1) {
			break;
		}
		
		if (nota >= 0 && nota <= 10) {
			notasAlumnos[i] = nota;
			if (nota == 0) {
				(*cantAusentes)++;
			}
			cantNotas++;
		} else {
			printf("\nNota Invalida\n");
		}
	}
}

void menu(int notasAlumnos[20], int ausentes) {
	char opcion;
	
	do {
		printf("\n--- Menú ---\n");
		printf("a. Nota Mayor y Menor.\n");
		printf("b. Cantidad de notas ingresadas.\n");
		printf("c. Cantidad de aprobados, desaprobados y ausentes.\n");
		printf("s. Salir.\n");
		printf("Ingrese una opción: ");
		scanf(" %c", &opcion);
		
		switch (opcion) {
		case 'a':
			menorMayor(notasAlumnos);
			break;
		case 'b':
			cantidadNotas(notasAlumnos);
			break;
		case 'c':
			cantidadADA(notasAlumnos, ausentes);
			break;
		case 's':
			printf("Saliendo...\n");
			break;
		default:
			printf("Opción inválida. Por favor, ingrese una opción válida.\n");
			break;
		}
	} while (opcion != 's');
}

void menorMayor(int notasAlumnos[20]) {
	int notaMenor = notasAlumnos[0], notaMayor = notasAlumnos[0];
	
	for (int i = 1; i < 20; i++) {
		if (notasAlumnos[i] < notaMenor && notasAlumnos[i] != 0) {
			notaMenor = notasAlumnos[i];
		}
		if (notasAlumnos[i] > notaMayor) {
			notaMayor = notasAlumnos[i];
		}
	}
	
	printf("Nota mayor: %d\nNota menor: %d\n", notaMayor, notaMenor);
}

void cantidadNotas(int notasAlumnos[20]) {
	int cantNotas = 0;
	
	for (int i = 0; i < 20; i++) {
		if (notasAlumnos[i] != 0) {
			cantNotas++;
		}
	}
	
	printf("Cantidad de notas ingresadas: %d\n", cantNotas);
}

void cantidadADA(int notasAlumnos[20], int cantAusentes) {
	int cantAprobados = 0, cantDesaprobados = 0;
	
	for (int i = 0; i < 20; i++) {
		if (notasAlumnos[i] >= 4) {
			cantAprobados++;
		} else if (notasAlumnos[i] > 0 && notasAlumnos[i] < 4) {
			cantDesaprobados++;
		}
	}
	
	printf("Cantidad de Aprobados: %d\n", cantAprobados);
	printf("Cantidad de Desaprobados: %d\n", cantDesaprobados);
	printf("Cantidad de Ausentes: %d\n", cantAusentes);
}

int main() {
	int notasAlumnos[20] = {0}, ausentes = 0;
	
	carga(notasAlumnos, &ausentes);
	menu(notasAlumnos, ausentes);
	
	return 0;
}

