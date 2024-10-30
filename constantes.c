#include <stdio.h>

// As constantes devem ser declaradas fora das funções, de forma a serem “visíveis” por todo o código do programa. Normalmente a sua definição é realizada imediatamente após as linhas dos #includes-

const int maior_valor = 10;
// const int cria uma variável fisicamente na memória para armazenar o valor correspondente.
// const cria a variável com o tipo definido na declaração

#define MENOR_VALOR 1
// #define é definido no pré processamento, substituindo no código todo lugar do nome pelo valor correspondente.
// #define utiliza o tipo que resulta da expressão do conteúdo definido como valor.
// #define não precisa de ; no final pois não se trata de um código em Linguagem C que será compilado
// É uma boa prática colocar as constantes simbólicas com letras maiúsculas.


int main(){

    int numero_lido, valores_lidos = 0;
    int valores[maior_valor];

    while(valores_lidos < 10){
        printf("Digite um numero:\n");
        scanf("%d", &numero_lido);

        if(numero_lido <= maior_valor && numero_lido >= MENOR_VALOR){
            valores[valores_lidos] = numero_lido;
            valores_lidos++;
        }else{
            printf("Sao aceitos apenas valores entre %d e %d.", MENOR_VALOR, maior_valor);
        }
    }

    printf("\n\t Valores inseridos:\n");
    for(int i = 0; i < 10; i++){
        printf("Valor %d => %d\n", i+1, valores[i]);
    }
    
}



/**

    ATIVIDADE

    Crie um programa tenha três constantes simbólicas. Sendo:
    1. Quantidade máxima de elementos.
    2. Elemento de parada.
    3. Quantidade mínima de elementos.

    Trabalhe com números inteiros.

    Solicite ao usuário que insira alguns valores, seguindo as seguintes regras:

        - Deve digitar no máximo X elementos (quantidade definida na constante)
        - Ao digitar o elemento de parada, a leitura deve ser interrompida caso tenha a quantidade mínima de elementos
        - Ao digitar o elemento de parada, mas não tenha digitado a quantidade mínima, deve inserir uma mensagem dizendo que deve digitar mais alguns números antes de encerrar.

    Ao final, imprima todos os números informados.
 */