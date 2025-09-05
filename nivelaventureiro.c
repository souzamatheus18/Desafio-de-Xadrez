#include <stdio.h>


    int main(){
        // Declarei as variaveis
        int torre = 1;
        int bispo = 1;
        int rainha = 1;
        int movimentocavalo = 1;
        
        // Coloquei para imprimir qual peça irá se movimentar
        printf("### MOVIMENTAÇÃO TORRE ###\n");

        // Usei a estrutura do while para a movimentação da torre    
        do
        {
            printf("Torre para direita.\n");
            torre++;
        } while (torre <= 5);

            printf("### MOVIMENTAÇÃO BISPO ###\n");


        // Usei a estrutura while para movimentação do bispo
        while (bispo <= 5)
        {
            printf("Bispo para cima direita.\n");
            bispo++;
        }

        printf("### MOVIMENTAÇÃO RAINHA ###\n");


        // Usei a estrutura for para a movimentação da rainha
        for (rainha; rainha <= 8; rainha++)
        {
            printf("Rainha para esquerda.\n");
        }

        printf ("### MOVIMENTAÇÃO CAVALO ###\n");

        while (movimentocavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Cavalo para baixo\n");
            }
            printf("Cavalo para esquerda\n");
        }
         
        return 0;
    }