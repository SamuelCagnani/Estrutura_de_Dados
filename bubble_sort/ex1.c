// Dada a seguinte lista de números, ordene-os utilizando o algoritmo Bubble Sort:
// {56, 12, 89, 34, 67, 23, 1, 55, 9}

#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {56, 12, 89, 34, 67, 23, 1, 55, 9};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, tamanho);

    printf("\nArray ordenado: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}