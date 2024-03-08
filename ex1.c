#include <stdlib.h>
#include <stdio.h>

void main()
{
    int index = 13, soma = 0, k = 0;

    while (k < index)
    {
        k++;
        soma += k;
    }
    printf("%d", soma);
}