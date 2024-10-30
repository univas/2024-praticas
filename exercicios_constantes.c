#include <stdio.h>

#define MAX 10
#define PARADA -1
#define MIN 5

int main(){
    int numero_lido, valores_lidos=0;
    int valores[MAX]; // vetor com maximo de posicoes

    do{
        printf("Digite um numero\n");
        scanf("%d", &numero_lido);

        if(numero_lido != PARADA){ 
            // salva no vetor apenas se nao for o valore de parada
            valores[valores_lidos++] = numero_lido;
        }else if(valores_lidos < MIN){
            // se digitou valor de parada mas ainda nao leu o minimo de elementos mostra mensagem
            printf("Deve digitar no minimo %d valores\n", MIN);
            numero_lido = 0; // reseta o valor do numero lido para o laco continuar
        }

    }while(valores_lidos < MAX && numero_lido!=PARADA);
    // Verifica se a quantidade é menor que o maximo possivel
    // E se o numero lido é diferente da condicao de parada.

    printf("Valores lidos");

    for(int i = 0; i < valores_lidos; i++){
        printf("\nValor: %d", valores[i]);
    }

}