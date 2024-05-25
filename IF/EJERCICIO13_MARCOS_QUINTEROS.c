#include <stdio.h>

int main() {
	int cantidadAlumnos=0;
	float montoTotal=0, montoAlumnos=0;
	printf("Ingrese cantidad de Alumnos: \n");
	scanf("%d",&cantidadAlumnos);
	
	montoTotal = cantidadAlumnos * 4000;
	
	if(cantidadAlumnos >= 100){
		montoAlumnos = cantidadAlumnos * 65;
	}else{
		if(cantidadAlumnos >= 50 && cantidadAlumnos <= 99){
			montoAlumnos = cantidadAlumnos * 70;
		}else{
			if(cantidadAlumnos >= 30 && cantidadAlumnos <= 49 ){
				montoAlumnos = cantidadAlumnos * 95;
			}else{
				if(cantidadAlumnos < 30)
					montoAlumnos = cantidadAlumnos * 100;
			}
		}
	}
	montoTotal = montoTotal + montoAlumnos;
	printf("El monto total a entregar es de $%.2f",montoTotal);
	
	return 0;
}

