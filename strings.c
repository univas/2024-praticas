#include <stdio.h>
#include <string.h>

// Toda string é um vetor de caracteres
// Porque não existe o tipo primitvo String
// \0 => É o último caracter de uma string
// Server pra identificar o final do texto e poder fazer os cálculos

// Para dimensionar um vetor precisamos ter em mente
// que o último caracter deve ser o \0

int main(){
    // int contador = 0;
    // for(int i = 0; i< TAMANHO; i++){
    //     if(string[i] != '\0'){
    //         contador++;
    //     }else{
    //         break;
    //     }
    // }
    // 0  1  2  3  4  5  6   7
    // M  A  R  C  O  S  \n  \0



    // char nome_completo[30]; // O máximo de caracteres possíveis é 29.

    // printf("Digite seu nome completo:\n");
    // scanf("%29s", nome_completo);
    // Após a leitura de uma string, é preciso limpar o buffer do teclado
    // Temos duas abordagens:
    // Unix (Mac e Linux)
    // fflush(stdin);
    // Windows
    // int c;
    // while((c = getchar()) != '\n');

    // printf("\n\n%s\n\n", nome_completo);



    char nome_completo2[30];

    printf("Digite novamente seu nome:\n");
    fgets(nome_completo2, 30, stdin); // stdin = entrada padrão
    // Com a função fgets, é possível ler toda a string incluindo o espaço

    // '\n'
    int indice = strcspn(nome_completo2, "\n");
    nome_completo2[indice] = '\0';
    printf("Nome: %s\n", nome_completo2);

    printf("Tamanho: %lu \n", strlen(nome_completo2));

}