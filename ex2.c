#include <stdio.h>

int main() {
  long int a, b, c, n;
  int cont, checknum = 0;

  printf("Digite o termo da sequencia de Fibonacci que voce quer checar:\n");
  scanf("%d", &n);

  if (n < 0) 
  {
    printf("Numero menor que 0 (INVALIDO)\n");
  }
  else
  {
    a = 1;
    b = 0;
    cont = 2;

    if (n == 0)
    {
        checknum = 1;
    }
    else
    {
        while(cont < n+2) 
        {
        c = a + b;

        if (c == n)
        {
            checknum = 1;
        }

        a = b;
        b = c;
        cont++;
        }
    }


    if(checknum == 1)
    {
        printf("O numero %ld esta na sequencia de Fibonacci!", n);
    }
    else
    {
        printf("O numero %ld nao esta na sequencia de Fibonacci!", n);
    }
  }

  return(0);
}