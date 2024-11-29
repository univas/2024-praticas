#include <stdio.h>
#include <string.h>

// Calculando o Comprimento:
//           Leia uma string e calcule o seu comprimento, sem usar a função strlen.

void ler_string(char texto[], int tamanho){
    printf("Digite uma palavra\n"); 
    fgets(texto, tamanho, stdin); // fgets adiciona no final da string o ENTER (\n)

    int posicao_enter = strcspn(texto, "\n");
    texto[posicao_enter] = '\0';
}

#define TAMANHO 20

int main(){
    char string[TAMANHO];

    ler_string(string, TAMANHO);
    int tamanho_calculado = 0;
    for(int i = 0; i < TAMANHO; i++){
        if(string[i] == '\0'){
            tamanho_calculado = i;
            break;
        }
    }

    printf("Tamanho: %d\n", tamanho_calculado);
}