// Implemente uma função em C para ordenar uma matriz bidimensional (matriz de inteiros)
// utilizando o algoritmo Bubble Sort. Teste sua função com a seguinte matriz:
// {
// {5, 18, 3, 42},
// {12, 7, 36, 9},
// {25, 14, 6, 30}
// }


#include <stdio.h>
#include <stdlib.h>

// Função de Bubble Sort otimizada para matriz bidimensional
void bubbleSortMatriz(int matriz[][4], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas - 1; j++)
        {
            for (int k = 0; k < colunas - j - 1; k++)
            {
                if (matriz[i][k] > matriz[i][k + 1])
                {
                    trocar(&matriz[i][k], &matriz[i][k + 1]);
                }
            }
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][4], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[3][4] = {
        {5, 18, 3, 42},
        {12, 7, 36, 9},
        {25, 14, 6, 30}};

    printf("Matriz original:\n");

    imprimirMatriz(matriz, 3, 4);
    bubbleSortMatrix(matriz, 3, 4);

    printf("\nMatriz ordenada:\n");

    imprimirMatriz(matriz, 3, 4);

    return 0;
}