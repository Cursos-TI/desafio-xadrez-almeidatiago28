#include <stdio.h>

int main() {  
    int passos_torre = 5; 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= passos_torre; i++) {
        printf("Direita\n");
    }

    
    int passos_bispo = 5;
    int contador_bispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contador_bispo <= passos_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    
    int passos_rainha = 8; 
    int contador_rainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= passos_rainha);

    printf("\nMovimento do Cavalo:\n");

    int movimentos_cavalo = 3;

    for (int i = 1; i <= movimentos_cavalo; i++)
    {
       int contador_baixo = 0;


       while (contador_baixo < 2)
       {
        printf("Baixo\n");
        contador_baixo++;
       }
       printf("Esquerda\n");
    }
    

    return 0;
}
