#include <stdio.h>
#include <stdlib.h>

// 3. Implemente a função strcpy (char *destino, char *origem) e a função strcat (char *destino, char *origem) usando ponteiros.

void strcpy_custom(char *destino, char *origem) 
{
    while (*origem) 
    {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0'; 
}


void strcat_custom(char *destino, char *origem) 
{
    
    while (*destino) 
    {
        destino++;
    }

    while (*origem) 
    {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}

int main() 
{
    char destino[50] = "Nadaver ";
    char origem1[] = "Boa tarde pessoal!";
    char origem2[] = "Vamos manipular strings com ponteiros!";
    char espaco[] = " ";

    printf("Destino antes copia: %s\n", destino);
    printf("Copiando a string 'Boa tarde pessoal!' para 'destino':\n");
    strcpy_custom(destino, origem1);
    printf("Resultado: %s\n\n\n", destino);

    printf("Destino da concatenacao copia: %s\n", destino);
    printf("Anexando a string 'Vamos manipular strings com ponteiros!' em 'destino':\n");
    strcat_custom(destino, espaco);
    strcat_custom(destino, origem2);
    printf("Resultado: %s\n\n\n", destino);

    return 0;
}
