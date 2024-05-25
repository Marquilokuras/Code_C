#include <stdio.h>

int main() {
	int unidadesMateria=0, unidadesEstudiadas=0, unidadesFaltantes=0;
	printf("Ingrese cantidad de unidades de la materia: \n");
	scanf("%d",&unidadesMateria);
	printf("Ingrese cantidad de unidades estudiadas: \n");
	scanf("%d",&unidadesEstudiadas);
	
	if(unidadesEstudiadas == unidadesMateria){
		printf("El alumno estudió toda la materia");
	}else{
		unidadesFaltantes = unidadesMateria - unidadesEstudiadas;
		printf("Al alumno le faltan %d unidad/es",unidadesFaltantes);
	}
	return 0;
}

