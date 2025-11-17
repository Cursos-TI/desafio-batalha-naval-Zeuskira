#include <stdio.h>

int main() {
    int tabuleiro[10][10]= {0}; // Inicializa o tabuleiro com zeros
    int i, j; // Variáveis de controle para os loops e indicar linha/coluna
    
    printf("   "); // Espaço necessário para alinhar os números das colunas
    for (j = 0; j < 10; j++) { // Loop para imprimir os números das colunas
        printf("%d ", 1 + j); // Imprime os números de 1 a 10, sem o 1 + j, iria imprimir de 0 a 9
    }
    printf("\n");

    int navio1_linha[] = {2, 2, 2}; // Define as posições do navio horizontal
    int navio1_coluna[] = {2, 3, 4};

    int navio2_linha[] = {2, 3, 4}; // Define as posições do navio vertical
    int navio2_coluna[] = {7, 7, 7};

    
    for (i = 0; i < 3; i++) { // Coloca os navios no tabuleiro, substituindo os zeros por 3
        tabuleiro[navio1_linha[i]][navio1_coluna[i]] = 3;
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[navio2_linha[i]][navio2_coluna[i]] = 3;
    }


    for (i = 0; i < 10; i++) { 
        printf("%c: ", 'A' + i); // Imprime a letra correspondente à linha (A–J), convertendo o índice numérico em caractere ASCII
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime a matriz
            
            
        }
        printf("\n");
        
    }
    

    return 0;
}