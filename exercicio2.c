#include <stdio.h>
#include <string.h>

#define TAMANHO 4

void ler_e_imprimir_string(char texto[], int tamanho){
    printf("Digite uma palavra\n"); 
    fgets(texto, tamanho, stdin); // fgets adiciona no final da string o ENTER (\n)

    int posicao_enter = strcspn(texto, "\n");
    texto[posicao_enter] = '\0';

    printf("Palavra: %s\n", texto);
}

int main(){
    char texto1[TAMANHO];
    char texto2[TAMANHO];

    ler_e_imprimir_string(texto1, TAMANHO);
    ler_e_imprimir_string(texto2, TAMANHO);

    printf("Texto 01: %s\n", texto1);
    printf("Texto 02: %s\n", texto2);

    char texto_concatenado[TAMANHO + TAMANHO - 1];

    for(int i = 0; i <= TAMANHO; i++){
        // texto1
        if(texto1[i] != '\0'){
            texto_concatenado[i] = texto1[i];
        }

        printf("%c",  texto1[i]);
    }

    for(int i = 0; i <= TAMANHO; i++){
        // texto2
        int posicao = i + TAMANHO;
        printf("\n\t%d\n", posicao);
        texto_concatenado[posicao] = texto2[i];
        printf("%c",  texto2[i]);
    }

    printf("Concatenado: %s\n", texto_concatenado);
}