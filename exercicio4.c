#include <stdio.h>
#include <string.h>

// Comparando Strings:
//           Leia duas strings e compare-as, indicando se são iguais ou diferentes.

#define TAMANHO 30

void ler_string(char texto[], int tamanho){
    printf("Digite uma palavra\n"); 
    fgets(texto, tamanho, stdin); // fgets adiciona no final da string o ENTER (\n)

    int posicao_enter = strcspn(texto, "\n");
    texto[posicao_enter] = '\0';
}

int main(){
    char texto1[TAMANHO];
    char texto2[TAMANHO];

    ler_string(texto1, TAMANHO);
    ler_string(texto2, TAMANHO);

    printf("Texto 01: %s\n", texto1);
    printf("Texto 02: %s\n", texto2);

    int iguais = 1;
    for(int i = 0; i < TAMANHO; i++){
        if(texto1[i] == '\0' || texto2[i] == '\0'){
            break;
        }

        if(texto1[i] != texto2[i]){
            iguais = 0;
            break;
        }
    }

    if(iguais == 1 && strlen(texto1) == strlen(texto2)){
        printf("Textos iguais.");
    }else{
        printf("Textos diferentes.");
    }
}