#include <stdio.h>

int main() {
    // Torre 5 casas para esquerda
    int i = 0;
    do
    {
        printf("Direita\n");
        i++;
    } while (i < 5);
    
    // Bispo 5 casas na diagonal para cima esquerda
    for ( i = 0; i < 5; i++)
    {
        printf("Cima Direita\n");
    }
    
    //rainha 8 casas para esquerda
    i = 0;
    while (i < 8)
    {
        printf("Esquerda\n");
        i++;
    }
    printf("\n");

    // Movimento do cavalo
    int baixo = 2;
    int esquerda = 1;
    while (esquerda <= 1)
    {
        for ( i = 0; i < baixo; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        esquerda++;
        
    }
    
    
    
    return 0;
}