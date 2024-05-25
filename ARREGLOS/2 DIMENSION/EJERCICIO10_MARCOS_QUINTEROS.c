#include <stdio.h>

#define NUM_ESTUDIANTES 4

void carga(int estudiantes[NUM_ESTUDIANTES][2]) {
	estudiantes[0][0] = 1; estudiantes[0][1] = 10;
	estudiantes[1][0] = 2; estudiantes[1][1] = 2;
	estudiantes[2][0] = 3; estudiantes[2][1] = 7;
	estudiantes[3][0] = 4; estudiantes[3][1] = 3;
}

int mejor(int estudiantes[NUM_ESTUDIANTES][2]) {
	int mejorC = estudiantes[0][1];
	int mejorEstudiante = estudiantes[0][0];
	for (int i = 1; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] > mejorC) {
			mejorC = estudiantes[i][1];
			mejorEstudiante = estudiantes[i][0];
		}
	}
	printf("Estudiante con mejor calificación: %d, Calificación: %d\n", mejorEstudiante, mejorC);
	return mejorC;
}

int peor(int estudiantes[NUM_ESTUDIANTES][2]) {
	int peorC = estudiantes[0][1];
	int peorEstudiante = estudiantes[0][0];
	for (int i = 1; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] < peorC) {
			peorC = estudiantes[i][1];
			peorEstudiante = estudiantes[i][0];
		}
	}
	printf("Estudiante con peor calificación: %d, Calificación: %d\n", peorEstudiante, peorC);
	return peorC;
}

void ordenar(int estudiantes[NUM_ESTUDIANTES][2]) {
	for (int i = 0; i < NUM_ESTUDIANTES - 1; i++) {
		for (int j = 0; j < NUM_ESTUDIANTES - i - 1; j++) {
			if (estudiantes[j][1] < estudiantes[j + 1][1]) {
				int tempID = estudiantes[j][0];
				int tempCal = estudiantes[j][1];
				estudiantes[j][0] = estudiantes[j + 1][0];
				estudiantes[j][1] = estudiantes[j + 1][1];
				estudiantes[j + 1][0] = tempID;
				estudiantes[j + 1][1] = tempCal;
			}
		}
	}
}

void listar(int estudiantes[NUM_ESTUDIANTES][2]) {
	ordenar(estudiantes);
	printf("Listado de estudiantes por orden de mérito:\n");
	for (int i = 0; i < NUM_ESTUDIANTES; i++) {
		printf("Estudiante %d, Calificación: %d\n", estudiantes[i][0], estudiantes[i][1]);
	}
}

void aprobadosDesaprobados(int estudiantes[NUM_ESTUDIANTES][2]) {
	int aprobados = 0, desaprobados = 0;
	for (int i = 0; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] >= 7) {
			aprobados++;
		} else {
			desaprobados++;
		}
	}
	printf("Cantidad de estudiantes aprobados: %d\n", aprobados);
	printf("Cantidad de estudiantes desaprobados: %d\n", desaprobados);
}

void niveles(int estudiantes[NUM_ESTUDIANTES][2]) {
	printf("Estudiantes en nivel básico (1-4):\n");
	for (int i = 0; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] >= 1 && estudiantes[i][1] <= 4) {
			printf("Estudiante %d, Calificación: %d\n", estudiantes[i][0], estudiantes[i][1]);
		}
	}
	printf("Estudiantes en nivel intermedio (5-7):\n");
	for (int i = 0; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] >= 5 && estudiantes[i][1] <= 7) {
			printf("Estudiante %d, Calificación: %d\n", estudiantes[i][0], estudiantes[i][1]);
		}
	}
	printf("Estudiantes en nivel avanzado (8-10):\n");
	for (int i = 0; i < NUM_ESTUDIANTES; i++) {
		if (estudiantes[i][1] >= 8 && estudiantes[i][1] <= 10) {
			printf("Estudiante %d, Calificación: %d\n", estudiantes[i][0], estudiantes[i][1]);
		}
	}
}

void menu() {
	int estudiantes[NUM_ESTUDIANTES][2] = {0};
	char opcion = 's';
	
	carga(estudiantes);
	
	do {
		printf("\n**MENU**\na. Buscar el estudiante con mejor calificación.\nb. Buscar el estudiante con peor calificación.\nc. Listado ordenado por orden de mérito de mayor a menor.\nd. Cantidad de estudiantes aprobados y desaprobados.\ne. Niveles de estudiantes.\ns. Salir\n");
		printf("Ingrese una opción: ");
		scanf(" %c", &opcion);
		switch (opcion) {
		case 'a':
			mejor(estudiantes);
			break;
		case 'b':
			peor(estudiantes);
			break;
		case 'c':
			listar(estudiantes);
			break;
		case 'd':
			aprobadosDesaprobados(estudiantes);
			break;
		case 'e':
			niveles(estudiantes);
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

