// Implemente uma versão do Bubble Sort que ordene em ordem decrescente em vez de
// crescente. Teste sua função com a lista de números:
// {67, 23, 45, 12, 78, 9, 56}

#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortDesc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            { // Modificado para ordenação decrescente
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {67, 23, 45, 12, 78, 9, 56};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSortDesc(arr, tamanho);

    printf("\nArray ordenado em ordem decrescente: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}