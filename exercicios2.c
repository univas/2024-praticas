#include <stdio.h>

int somarValores(int valores[]){
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += valores[i];
        //soma = soma + valores[i];
    }

    return soma;
}

int main(){
    int numeros[5];
    int numero_lido;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

    printf("A soma eh: %d\n", somarValores(numeros));
}