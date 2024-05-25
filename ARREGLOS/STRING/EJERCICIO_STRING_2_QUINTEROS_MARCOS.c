#include <stdio.h>

void producto(int matriz1[2][2],int matriz2[2][2],int matrizProducto[2][2]){
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrizProducto[i][j] = matriz1[i][j] * matriz2[i][j];
		}
	}
	
	printf("\nMatriz Producto\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",matrizProducto[i][j]);
		}
		
	}
}

int main() {
	
	int matriz1[2][2],matriz2[2][2],matrizProducto[2][2]={0};
	
	for(int i=0;i<2;i++){
		printf("\nIngrese numeros para la fila %d:\n",i);
		for(int j=0;j<2;j++){
			printf("\nMatriz 1 - dato %d:\n",j);
			scanf("%d",&matriz1[i][j]);
		}
		for(int j=0;j<2;j++){
			printf("\nMatriz 2 - dato %d:\n",j);
			scanf("%d",&matriz2[i][j]);
		}
	}
	
	producto(matriz1,matriz2,matrizProducto);
	return 0;
}

