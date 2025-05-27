#include <stdio.h>

//Torre

void mover_torre(int passos_restantes){
    if (passos_restantes == 0) return; 
       printf("Direita\n");
       mover_torre(passos_restantes - 1);

    }


//Rainha

void mover_rainha(int passos_restantes){
    if (passos_restantes == 0) return;
    
       printf("Esquerda\n");
       mover_rainha(passos_restantes - 1);

    }
    
//Bispo

void mover_bispo_recursivo(int passos){
    if (passos == 0) return;
    {
        for (int i = 0; i < 1; i++){
            for (int j = 0; j < 1; j++){
               printf("Cima Direita\n");
            }
            
        
        }
        
    } mover_bispo_recursivo(passos - 1);
    
}


//MOVIMENTO CAVALO

void mover_cavalo(int movimentos_totais){
    for (int i = 0; i < movimentos_totais; i++){

        for (int cima = 0; cima < 3; cima++){
            if (cima < 2){
                printf("Cima\n");
                continue;
            }
            
            for (int direita = 0; direita < 1; direita++){
                printf("Direita\n");
                break;
            }
            
        }
        
    
    } 
    
}



int main(){

    int passos_torre = 5;
    int passos_bispo = 5;
    int passos_rainha = 8;
    int movimentos_cavalo = 3;

    printf("\033[31mMovimento da Torre:\n\033[0m");
    mover_torre(passos_torre);

    printf("\033[31m\nMovimento do Bispo:\n\033[0m");
    mover_bispo_recursivo(passos_bispo);

    printf("\033[31m\nMovimento da Rainha:\n\033[0m");
    mover_rainha(passos_rainha);

    printf("\033[31m\nMovimento do Cavalo:\n\033[0m");
    mover_cavalo(movimentos_cavalo);

    return 0;
}

