#include <stdio.h>

int main() {
    // Torre 5 casas para direita
    int i = 0;
    do
    {
        printf("Direita\n");
        i++;
    } while (i < 5);
    printf("\n");
    
    // Bispo 5 casas na diagonal para cima direita
    for ( i = 0; i < 5; i++)
    {
        printf("Cima Direita\n");
    }
    printf("\n");
    
    //rainha 8 casas para esquerda
    i = 0;
    while (i < 8)
    {
        printf("Esquerda\n");
        i++;
    }
    
    return 0;
}