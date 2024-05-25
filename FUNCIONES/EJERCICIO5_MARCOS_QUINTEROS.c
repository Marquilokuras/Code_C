#include <stdio.h>

void minuscula();
void mayuscula();

void mayuscula(){
	for(int i = 65; i <= 90;i++){
		printf(" %c",i);
	}
}
	
void minuscula(){
	for(int i = 97; i <= 122;i++){
		printf(" %c",i);
	}
}

int main() {
	mayuscula();
	minuscula();
	return 0;
}

