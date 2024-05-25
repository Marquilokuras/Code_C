#include <stdio.h>
#include <string.h>

void carga(int alumnos[10],char nombres[10][10]){
	int nota=0;
	//char nombre[10];
	for(int i=0;i<10;i++){
		printf("\nIngrese Nombre:\n");
		fgets(nombres[i],10,stdin);
		
		//do{
			printf("\nIngrese Promedio anual:\n");
			scanf("%d",&nota);
		//}while(nota<0 || nota>10);
		alumnos[i]=nota;
	}
}
	
void ordenMerito(int alumnos[10],char nombres[10][10]){
	int aux=0;
	char nombre;
	for(int i=0;i<10;i++){
		if(alumnos[i]<alumnos[i+1]){
			aux=alumnos[i+1];
			//nombre=nombres[i+1];
			alumnos[i+1]=alumnos[i];
			//nombres[i+1]=nombres[i];
			alumnos[i]=aux;
			//nombres[i]=nombre;
		}
	}
}

int main() {
	int alumnos[10]={0};
	char nombres[10][10];
	
	carga(alumnos,nombres);
	ordenMerito(alumnos,nombres);
	//imprimir(alumnos);
	return 0;
}
