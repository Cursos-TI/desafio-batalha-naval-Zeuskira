#include <stdio.h>

int main() {
    int tabuleiro[10][10]= {0}; // Inicializa o tabuleiro com zeros
    int i, j; // Variáveis de controle para os loops e indicar linha/coluna
    
    // Navios
    int navio1_linha[] = {2, 2, 2}; // Define as posições do navio horizontal
    int navio1_coluna[] = {2, 3, 4};

    int navio2_linha[] = {2, 3, 4}; // Define as posições do navio vertical
    int navio2_coluna[] = {7, 7, 7};

    int navio3_linha[] = {4, 5, 6}; // Define as posições do navio diagonal
    int navio3_coluna[] = {1, 2, 3};

    int navio4_linha[] = {7, 8, 9}; // Define as posições do navio diagonal
    int navio4_coluna[] = {7, 8, 9};
    
    for (i = 0; i < 3; i++) { // Coloca os navios no tabuleiro, substituindo os zeros por 3
        tabuleiro[navio1_linha[i]][navio1_coluna[i]] = 3;
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[navio2_linha[i]][navio2_coluna[i]] = 3;
    }

    for (i = 0; i < 3; i++) {
        tabuleiro[navio3_linha[i]][navio3_coluna[i]] = 3;
    }
    for (i = 0; i < 3; i++) {
        tabuleiro[navio4_linha[i]][navio4_coluna[i]] = 3;
    }
    // Habilidades

    // Cone
    for(i = 0; i < 10; i++){ 
        for (j = 0; j < 10; j++) {
            if (i == 0 && j == 2) {
                tabuleiro[i][j] = 5;
            } else if (i == 1 && j >= 1 && j <= 3){
                tabuleiro[i][j] = 5;
            } else if (i == 2 && j >= 0 && j <= 4){
                tabuleiro[i][j] = 5;
        }
    }
        }
    // Cruz   
    
    for(i = 0; i < 10; i++){ 
        for (j = 0; j < 10; j++) {
            if (i >= 5 && i <= 7 && j == 7 ) {
                tabuleiro[i][j] = 5;
            } else if (i == 6 && j >= 5 && j <= 9){
                tabuleiro[i][j] = 5;
            }
        }
    }
    // Octaedro
    for(i = 0; i < 10; i++){ 
        for (j = 0; j < 10; j++) {
            if (i >= 7 && i <= 9 && j == 2) {
                tabuleiro[i][j] = 5;
            } else if (i == 8 && j >= 1 && j <= 3){
                tabuleiro[i][j] = 5;
            }
        }
    }    
    printf("   "); // Espaço necessário para alinhar os números das colunas
    for (j = 0; j < 10; j++) { // Loop para imprimir os números das colunas
        printf("%d ", j); // Imprime os números de 0 a 9 para as colunas
    }
    printf("\n");
    
    for (i = 0; i < 10; i++) { 
        printf("%d: ", i); // Imprime de 0 a 9 para as linhas
        for (j = 0; j < 10; j++) { 
            printf("%d ", tabuleiro[i][j]); // Imprime a matriz do tabuleiro
        } 
        printf("\n");
        
    }
   

    return 0;
}