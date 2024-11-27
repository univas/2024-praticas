#include <stdio.h>
#include <string.h>

// Leia uma string e a imprima na tela.
// Leia duas strings e as imprima em linhas separadas.

#define TAMANHO 20

void ler_e_imprimir_string(char texto[], int tamanho){
    printf("Digite uma palavra\n"); 
    fgets(texto, tamanho, stdin); // fgets adiciona no final da string o ENTER (\n)

    int posicao_enter = strcspn(texto, "\n");
    texto[posicao_enter] = '\0';

    printf("Palavra: %s\n", texto);
}

int main(){
    char texto1[TAMANHO]; // tem apenas apenas 19 caracteres, pois o último é \0

    ler_e_imprimir_string(texto1, TAMANHO);

    ler_e_imprimir_string(texto1, TAMANHO);
}