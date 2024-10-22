#include <stdio.h>

void mostrarDados(int vetor_de_idades[], int quantidade_total){
    for(int i = 0; i < quantidade_total; i++){
        printf("Idade lida: %d\n", vetor_de_idades[i]);
    }
}

int obtemMaiorValor(int vetor_de_idades[], int quantidade_total){
    int maior = 0;

    for(int i = 0; i < quantidade_total; i++){
        if(vetor_de_idades[i] > maior){
            maior = vetor_de_idades[i];
        }
    }

    return maior;
}

int main(){
    int idades[20];
    int idade_lida = 0;
    int contador_de_idades = 0;

    for(int i = 0; i < 20; i++){
        printf("Digite uma idade:\n");
        scanf("%d", &idade_lida);

        if(idade_lida < 0){
            break;
        }else{
            idades[i] = idade_lida;
            contador_de_idades++;
        }
    } 

    mostrarDados(idades, contador_de_idades);

    // Cálculo da média
    int soma = 0;
    float media = 0.0;

    for(int i = 0; i < contador_de_idades; i++){
        soma = soma + idades[i];
    }

    media = soma / (float)contador_de_idades;

    printf("Media das idades: %.2f\n", media);
    // Cálculo da média


    // Cálculo da maior idade
    int maior = obtemMaiorValor(idades, contador_de_idades);

    printf("A maior idade eh: %d\n", maior);

    // Cálculo da maior idade

    // Cálculo da menor idade
    // int menor = INT_MAX;
    int menor = idades[0];

    for(int i = 0; i < contador_de_idades; i++){
        if(idades[i] < menor){
            menor = idades[i];
        }
    }

    printf("A menor idade eh: %d\n", menor);

    // Cálculo da menor idade

    // Diferença entre o mais velho e mais novo

    printf("A diferenca de idade entre o mais velho e o mais novo eh de: %d anos", maior - menor);

    // Diferença entre o mais velho e mais novo

    // Cálculo do desvio padrão
    float somatorio_de_desvios = 0.0;
    float desvio_padrao = 0.0;

    for(int i = 0; i < contador_de_idades; i++){
        float valor = 0.0;

        valor = media - idades[i];

        if(valor < 0){
            valor = valor * -1;
        }

        somatorio_de_desvios = somatorio_de_desvios + valor;
    }

    desvio_padrao = somatorio_de_desvios / contador_de_idades;

    printf("O desvio padrao eh: %.2f", desvio_padrao);

    // Cálculo do desvio padrão

    
}
