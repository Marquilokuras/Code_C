/*Crear un programa que permita cargar un vector de 5 números enteros. 
Luego, mostrar el número menor y el número mayor de los valores ingresados.*/
#include <stdio.h>

int main() {
	int listado[5] = {0},mayor=0,menor=0;
	
	for(int i=0; i < 5 ; i++){
		printf("\nIngrese numero: \n");
		scanf("%d",&listado[i]);
	}
	
	for(int i=0; i < 5 ; i++){
		if(i==0){
			menor = listado[i];
			mayor = listado[i];
		}else{
			if(menor < listado[i]){
				menor = listado[i];
			}
		}
		
		if(mayor > listado[i]){
			mayor = listado[i];
		}
	}
	
	printf("\nMayor: %d\nMenor: %d\n",mayor,menor);
	return 0;
}

