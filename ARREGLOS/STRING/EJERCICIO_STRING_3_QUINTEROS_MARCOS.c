#include <stdio.h>

void carga(int numeros[10]){
	for(int i=0;i<10;i++){
		printf("\nIngrese numero:\n");
		scanf("%d",&numeros[i]);
	}
}
	
void promedio(int numeros[10],int mayor,int menor){
	float numeroPromedio=0;
	float diferenciaMinimo=0,diferenciaMaxima=0;
	for(int i=0;i<10;i++){
		numeroPromedio = numeroPromedio + (float)numeros[i];
	}
	numeroPromedio = numeroPromedio / 10;
	printf("\nPromedio: %.2f",numeroPromedio);
	diferenciaMinimo = numeroPromedio - menor;
	diferenciaMaxima =  mayor - numeroPromedio;
	if(diferenciaMinimo < diferenciaMaxima){
		printf("\nDiferencia Minimo: %.2f\n",diferenciaMinimo);
	}else{
		printf("\nDiferenfia Maximo: %.2f\n",diferenciaMaxima);
	}
}

void imprimir(int numeros[10]){
	int numero=0,mayor=0,menor=0;
	printf("\nMatriz:\n");
	for(int i=0;i<10;i++){
		printf("[%d] ",numeros[i]);
		numero=numeros[i];
		if(i==0){
			mayor=numero;
			menor=numero;
		}else{
			if(numero < menor ){
				menor = numero;
			}else{
				if(numero > mayor){
					mayor = numero;
				}
			}
		}
	}
	printf("\nMayor: %d\nMenor: %d",mayor,menor);
	promedio(numeros,mayor,menor);
}

void ordenar(int numeros[10]){
	int aux=0;
	for(int  i=0;i<10-1;i++){
		if(numeros[i] > numeros[i+1]) {
			aux = numeros[i];
			numeros[i] = numeros[i+1];
			numeros[i+1] = aux;
		}
	}
	imprimir(numeros);
}
	
int main() {
	int numeros[10]={0};
	
	carga(numeros);
	imprimir(numeros);
	ordenar(numeros);
	return 0;
}

