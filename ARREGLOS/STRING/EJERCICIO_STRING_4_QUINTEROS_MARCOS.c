#include <stdio.h>
#include <string.h>

void carga(int alumnos[10], char nombres[10][30]) {
	int nota = 0;
	for(int i = 0; i < 10; i++) {
		printf("\nIngrese Nombre:\n");
		fgets(nombres[i], 30, stdin);
		// Eliminar el salto de línea del nombre
		nombres[i][strcspn(nombres[i], "\n")] = 0;
		
		do {
			printf("Ingrese Promedio anual:\n");
			scanf("%d", &nota);
		} while(nota < 0 || nota > 10);
		alumnos[i] = nota;
		
		// Limpiar el buffer del stdin
		while (getchar() != '\n');
	}
}

// Función para ordenar a los alumnos por méritos usando el método de burbuja
void ordenMerito(int alumnos[10], char nombres[10][30]) {
	int auxNota;
	char auxNombre[30];
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10 - i - 1; j++) {
			if(alumnos[j] < alumnos[j + 1]) {
				// Intercambiar notas
				auxNota = alumnos[j];
				alumnos[j] = alumnos[j + 1];
				alumnos[j + 1] = auxNota;
				
				// Intercambiar nombres
				strcpy(auxNombre, nombres[j]);
				strcpy(nombres[j], nombres[j + 1]);
				strcpy(nombres[j + 1], auxNombre);
			}
		}
	}
}


void imprimir(int alumnos[10], char nombres[10][30]) {
	printf("\nAlumnos con notas entre 0 y 4:\n");
	for(int i = 0; i < 10; i++) {
		if(alumnos[i] >= 0 && alumnos[i] < 4) {
			printf("%s - %d\n", nombres[i], alumnos[i]);
		}
	}
	
	printf("\nAlumnos con notas entre 4 y 7:\n");
	for(int i = 0; i < 10; i++) {
		if(alumnos[i] >= 4 && alumnos[i] < 7) {
			printf("%s - %d\n", nombres[i], alumnos[i]);
		}
	}
	
	printf("\nAlumnos con notas entre 7 y 10:\n");
	for(int i = 0; i < 10; i++) {
		if(alumnos[i] >= 7 && alumnos[i] <= 10) {
			printf("%s - %d\n", nombres[i], alumnos[i]);
		}
	}
}

int main() {
	int alumnos[10] = {0};
	char nombres[10][30];
	
	carga(alumnos, nombres);
	ordenMerito(alumnos, nombres);
	imprimir(alumnos, nombres);
	
	return 0;
}

