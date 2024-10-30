#include<stdio.h>

// Uma matriz, nada mais é do que um vetor. Porém é um vetor com mais de uma dimensão especificada.
// Até agora, trabalhamos com vetores unidimensionais, que são, na verdade, casos específicos de vetores.
// Para cada dimensão do vetor, eu utilizo um conjunto de [] com a quantidad de elementos dentro.
// int campo_de_batalha[4][4]

// Em C, uma matriz, nada mais é do que um vetor de vetores.
// Ou seja, cada posição do meu vetor principal é constituído de um outro vetor com N posições.

// Se declararmos int matriz[3][4]
// Estamos falando que queremos um vetor de 3 posições, onde cada posição é um vetor de 04 posições.

// O que corresponde o código: matriz[0]

#define DIM 4
#define REMO 1
#define VELEIRO 2
#define SUBMARINO 3

int jogar(int campo[][DIM]){
    int posicao_x, posicao_y;
    printf("Posicao X:"); scanf("%d", &posicao_x);
    printf("Posicao Y:"); scanf("%d", &posicao_y);

    if(campo[posicao_x][posicao_y] != 0){
        printf("Parabens voce pontuou!\n");
        return 1;
    }else{
        return 0;
    }
}

void posicionarBarco(int barco, int campo[][DIM]){
    int posicao_x, posicao_y;
    printf("Posicao X:"); scanf("%d", &posicao_x);
    printf("Posicao Y:"); scanf("%d", &posicao_y);

    campo[posicao_x][posicao_y] = barco;
}

int main(){
    int campo_a[DIM][DIM];
    int campo_b[DIM][DIM];
    int posicao_x, posicao_y;
    int pontos_a, pontos_b;

    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            campo_a[i][j] = 0;
            campo_b[i][j] = 0;
        }
    }


    printf("\nJogador A, posicione seu barco a remo\n");
    posicionarBarco(REMO, campo_a);

    printf("\nJogador A, posicione seu barco a VELEIRO\n");
    posicionarBarco(VELEIRO, campo_a);

    printf("\nJogador A, posicione seu barco a Submarino\n");
    posicionarBarco(SUBMARINO, campo_a);

    printf("\nJogador B, posicione seu barco a remo\n");
    posicionarBarco(REMO, campo_b);

    printf("\nJogador B, posicione seu barco a VELEIRO\n");
    posicionarBarco(VELEIRO, campo_b);

    printf("\nJogador B, posicione seu barco a Submarino\n");
    posicionarBarco(SUBMARINO, campo_b);


    printf("\n\nJogada 01 do Jogador A:\n");
    pontos_a += jogar(campo_b);

    printf("\n\nJogada 02 do Jogador A:\n");
    pontos_a += jogar(campo_b);

    printf("\n\nJogada 01 do Jogador B:\n");
    pontos_b += jogar(campo_a);

    printf("\n\nJogada 02 do Jogador B:\n");
    pontos_b += jogar(campo_a);


    printf("\n\nPontuacao final\n");
    printf("\tJogador A: %d\n", pontos_a);
    printf("\tJogador B: %d\n", pontos_b);

}