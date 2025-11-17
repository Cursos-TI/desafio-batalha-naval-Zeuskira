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
    int cone_linha[]= {4,5,5,5,6,6,6,6,6}; // Define as posições dos cones
    int cone_coluna[]= {3,2,3,4,1,2,3,4,5};

    for (i = 0; i < 9; i++) { // Coloca o cone no tabuleiro
        tabuleiro[cone_linha[i]][cone_coluna[i]] = 5;
    }
    
    int cruz_linha[]= {1,0,2,1,1,1,1}; // Define as posições da cruz
    int cruz_coluna[]= {2,2,2,1,0,3,4};

    for (i = 0; i < 7; i++) { // Coloca a cruz no tabuleiro
        tabuleiro[cruz_linha[i]][cruz_coluna[i]] = 5;
    }

    int octa_linha[]= {1,1,1,0,2}; // Define as posições do octaedro
    int octa_coluna[]= {7,8,9,8,8};

    for (i = 0; i < 5; i++) { // Coloca o octaedro no tabuleiro
        tabuleiro[octa_linha[i]][octa_coluna[i]] = 5;
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
