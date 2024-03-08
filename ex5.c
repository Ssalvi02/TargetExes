#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Reverta essa string!";
    size_t tam = strlen(str);

    for(int i = 0; i < tam / 2; i++) 
    {
       char temp = str[i];
       str[i] = str[tam - i - 1];
       str[tam - i - 1] = temp;
    }
    printf("%s", str);
}