#include <stdio.h>

int main(){
    int numeros[10];
    int numero_lido;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

    for(int i = 0; i < 10; i++){
        printf("%d    ", numeros[i]);
    }

    printf("\n");
}