// Crie um programa em C que usa o Bubble Sort para ordenar uma lista de palavras em
// ordem alfabética. Utilize um array de strings para armazenar as palavras. Teste seu
// programa com as seguintes palavras:
// {"banana", "maçã", "abacaxi", "uva", "laranja"}

#include <stdio.h>
#include <string.h>

void trocarString(char *a, char *b)
{
    char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void bubbleSortStrings(char *arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                trocarString(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    char *palavras[] = {"banana", "maçã", "abacaxi", "uva", "laranja"};
    int tamanho = sizeof(palavras) / sizeof(palavras[0]);

    printf("Lista original de palavras: ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%s ", palavras[i]);
    }

    bubbleSortStrings(palavras, tamanho);

    printf("\nLista ordenada de palavras: ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%s ", palavras[i]);
    }

    return 0;
}
