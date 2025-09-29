#include <stdio.h>

// Função para mover a torre
void movimentoTorre(int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentoTorre(casas - 1);
    }
    
}

// Função para mover o bispo
void movimentoBispo(int vertical) {
    if (vertical > 0) {
        printf("Cima\n");
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Esquerda\n");
        }
        movimentoBispo(vertical - 1);
    }
}

// Função para mover a rainha
void movimentoRainha(int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
    
}

// Função para mover o cavalo
void movimentoCavalo(cima, direita) {
    for (cima = 1; cima <= 2; cima++) {
        printf("Cima\n");
        if (cima == 2) {
            for (direita = 1; direita <= 1; direita++) {
                printf("Direita\n");
                break; 
            }
        }
    }
}

int main() {
    // Torre 5 casas para esquerda
    movimentoTorre(5);
    printf("\n");
    
    // Bispo 5 casas na diagonal para cima esquerda
    movimentoBispo(5);
    printf("\n");
    
    //rainha 8 casas para esquerda
    movimentoRainha(8);
    printf("\n");

    // Movimento do cavalo
    movimentoCavalo(2, 1);
    
    return 0;
}