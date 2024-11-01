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
        printf("Jogada %d\n", jogadas);
        do{
            printf("Digite o valor da posicao X\n");
            scanf("%d", &x);

            printf("Digite o valor da posicao Y\n");
            scanf("%d", &y);
        }while(campo[x][y] != 0);

        campo[x][y] = JOGADOR_A;

        // coluna
        int ehIgual = 0;
        for(int i = 0; i < 3; i++){
            if(campo[i][y] == JOGADOR_A){
                ehIgual = 1;
            }else{
                ehIgual = 0;
                break;
            }
        }
        if(ehIgual == 1){
            vitorioso = JOGADOR_A;
        }
        // linha
        ehIgual = 0;
        for(int i = 0; i < 3; i++){
            if(campo[x][i] == JOGADOR_A){
                ehIgual = 1;
            }else{
                ehIgual = 0;
                break;
            }
        }
        if(ehIgual == 1){
            vitorioso = JOGADOR_A;
        }
        // diagonal
        if(x == y || 2 == x+y){
            // diagonal principal
            
            // diagonal secundaria
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