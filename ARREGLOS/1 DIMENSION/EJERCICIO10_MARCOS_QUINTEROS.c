
#include <stdio.h>

int main() {
	int notasAlumnos[20] = {0},nota = 0,notaMenor = 0, notaMayor=0, cantNotas = 0, cantAprobados = 0, cantDesaprobados = 0, cantAusentes = 0;
	
	for(int i=0;i < 20;i++){
		printf("\nIngrese nota:\n");
		scanf("%d",&nota);
		
		if(nota != -1){
			notasAlumnos[i] = nota;
			
			if(i==0){
				notaMenor = nota;
				notaMayor = nota;
			}else{
				if(notaMenor > nota){
					notaMenor = nota;
				}else{
					if(notaMayor < nota){
						notaMayor = nota;
					}
				}
			}
			
			if(nota >= 4){
				cantAprobados++;
			}else{
				cantDesaprobados++;
			}
			
			if(nota == 0)
			   cantAusentes++;
			
			cantNotas++;
		}else{
			printf("\nNota Invalida\n");
			break;
		}
		
	}
	
	char opcion = 's';
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
			printf("Nota mayor: %d\nNota menor: %d\n", notaMayor,notaMenor);
			break;
		case 'b':
			printf("Cantidad de notas ingresadas: %d\n", cantNotas);
			break;
		case 'c':
			printf("Cantidad de Aprobados: %d\n", cantAprobados);
			printf("Cantidad de Desaprobados: %d\n", cantDesaprobados);
			printf("Cantidad de Ausentes: %d\n", cantAusentes);
			break;
		case 's':
			printf("Saliendo...\n");
			break;
		default:
			printf("Opción inválida. Por favor, ingrese una opción válida.\n");
			break;
		}
	} while (opcion != 's');
	
	return 0;
}

