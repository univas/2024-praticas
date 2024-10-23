#include <stdio.h>

int main(){
    int idades[43];
    // Para criar um vetor utilizamos os [] com a quantidade 
    // de elementos dentro deles.
    // Sempre é necessário definir a quantidade de elementos
    // antes de usar de fato o vetor.

    int idade_lida = 0;

    for(int i = 0; i <= 3; i++){
        printf("Digite uma idade:\n");
        scanf("%d", &idade_lida);

        idades[i] = idade_lida;
    }

    for(int i = 0; i <= 3; i++){
        printf("\tIdade do aluno %d: %d\n", i, idades[i]);
    }
}