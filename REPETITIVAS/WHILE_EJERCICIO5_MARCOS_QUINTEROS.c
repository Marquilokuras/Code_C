#include <stdio.h>
#include <stdlib.h>

int main() {
	int voto=0, contadorCandidatoA=0, contadorCandidatoB=0, contadorCandidatoC=0, contadorNulos=0, contadorBlancos=0;
	char finVoto = 'n';
	
	while(finVoto == 'N' || finVoto == 'n'){
		printf("***** BIENVENID@S *****");
		printf("\nCANDIDATOS\n");
		printf("Candidato 1 \n");
		printf("Candidato 2 \n");
		printf("Candidato 3 \n");
		printf("Voto Nulo (4) \n");
		printf("Voto en blanco (0) \n");
		printf("Ingrese voto: \n");
		scanf("%d",&voto);
		switch(voto){
			case 0: contadorBlancos++;
			break;
			case 1: contadorCandidatoA++;
			break;
			case 2: contadorCandidatoB++;
			break;
			case 3: contadorCandidatoC++;
			break;
			case 4: contadorNulos++;
			break;
			default: printf("\nSu voto es nulo\n");
				contadorNulos++;
			break;
		}
		printf("¿Finalizo la votacion?(S/N)\n");
		scanf(" %c", &finVoto);
		printf(" \n");
		system("clear");
	}

	int maximoVotos = contadorCandidatoA;
	if (contadorCandidatoB > maximoVotos) maximoVotos = contadorCandidatoB;
	if (contadorCandidatoC > maximoVotos) maximoVotos = contadorCandidatoC;
	
	printf("\nRESULTADOS DEL ESCRUTINIO:\n");
	if (maximoVotos == contadorCandidatoA)
		printf("1er Puesto: Candidato A con %d votos\n", contadorCandidatoA);
	if (maximoVotos == contadorCandidatoB)
		printf("1er Puesto: Candidato B con %d votos\n", contadorCandidatoB);
	if (maximoVotos == contadorCandidatoC)
		printf("1er Puesto: Candidato C con %d votos\n", contadorCandidatoC);
	
	printf("2do Puesto: (por mayoría simple)\n");
	printf("3er Puesto: (por mayoría simple)\n");
	printf("Votos en Blanco: %d\n", contadorBlancos);
	printf("Votos Nulos: %d\n", contadorNulos);
	return 0;
}

