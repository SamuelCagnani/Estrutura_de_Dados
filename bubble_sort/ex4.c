// Desenvolva uma função em C para ordenar uma lista encadeada de números utilizando o
// Bubble Sort. Crie uma estrutura para representar um nó na lista e teste sua função com a
// seguinte lista:
// 3 -> 8 -> 1 -> 15 -> 4

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void trocarNodes(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSortListaEncadeada(struct Node *head)
{
    struct Node *i, *j;
    int troca;
    for (i = head; i != NULL; i = i->next)
    {
        troca = 0;
        for (j = head; j->next != NULL; j = j->next)
        {
            if (j->data > j->next->data)
            {
                trocarNodes(j, j->next);
                troca = 1;
            }
        }
        if (!troca)
        {
            break; // Lista já está ordenada
        }
    }
}

void imprimirLista(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    // Criando uma lista encadeada de exemplo
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 3;
    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 8;
    head->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->data = 1;
    head->next->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->next->data = 15;
    head->next->next->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->next->next->data = 4;
    head->next->next->next->next->next = NULL;

    printf("Lista original: ");
    imprimirLista(head);

    bubbleSortListaEncadeada(head);

    printf("Lista ordenada: ");
    imprimirLista(head);

    return 0;
}