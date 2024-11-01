#include <stdio.h>

#define JOGADOR_A 1
#define JOGADOR_B 2

int main(){
    int campo[3][3];
    int vitorioso = 0;
    int jogadas = 0, x = 0, y = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            campo[i][j] = 0;
        }
    }

    while(jogadas < 9 && vitorioso == 0){
        int jogador_atual = jogadas % 2 == 0 ? JOGADOR_A : JOGADOR_B;
        printf("Jogada %d\n Jogador: %d\n", jogadas, jogador_atual);
        do{
            printf("Digite o valor da posicao X\n");
            scanf("%d", &x);

            printf("Digite o valor da posicao Y\n");
            scanf("%d", &y);
        }while(campo[x][y] != 0);

        campo[x][y] = jogador_atual;

        // coluna
        int ehIgual = 0;
        for(int i = 0; i < 3; i++){
            if(campo[i][y] == jogador_atual){
                ehIgual = 1;
            }else{
                ehIgual = 0;
                break;
            }
        }
        if(ehIgual == 1){
            vitorioso = jogador_atual;
        }
        // linha
        ehIgual = 0;
        for(int i = 0; i < 3; i++){
            if(campo[x][i] == jogador_atual){
                ehIgual = 1;
            }else{
                ehIgual = 0;
                break;
            }
        }
        if(ehIgual == 1){
            vitorioso = jogador_atual;
        }
        // diagonal
        if(x == y || 2 == x+y){
            // diagonal principal
            ehIgual = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(i == j){
                        if(campo[i][j] == jogador_atual){
                            ehIgual = 1;
                        }else{
                            ehIgual = 0;
                            break;
                        }
                    }
                }
            }
            if(ehIgual == 1){
                vitorioso = jogador_atual;
            }
            // diagonal secundaria
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(i + j == 2){
                        if(campo[i][j] == jogador_atual){
                            ehIgual = 1;
                        }else{
                            ehIgual = 0;
                            break;
                        }
                    }
                }
            }
            if(ehIgual == 1){
                vitorioso = jogador_atual;
            }
        }

        jogadas++;
    }

    printf("Vitorioso: %d", vitorioso);

    // ler até nove jogadas ou usuário não ganhar
        // ler posicao x e y enquanto a posição estiver preenchida
        // Preencher posição com valor do usuário
        // Verificar se usuário ganhou        

    // se ninguém ganhou, deu velha
}