/*
Escribir una función que muestre el abecedario en mayúscula y otra función que muestre el abecedario en minúscula. Nota: En el código ASCII las letras de la A-Z es de 65-90, y las a-z de 97-122.
*/

#include <stdio.h>

void mostrarAbecedarioMayuscula() {
    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);
    }
    printf("\n");
}

void mostrarAbecedarioMinuscula() {
    for (int i = 97; i <= 122; i++) {
        printf("%c ", i);
    }
    printf("\n");
}

int main() {
    mostrarAbecedarioMayuscula();
    mostrarAbecedarioMinuscula();
    return 0;
}