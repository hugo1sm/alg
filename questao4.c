#include <stdio.h>

int main()
{
      int num;
      int i;
      int soma = 0;
      printf ("Digite um numero \n");
      scanf ("%d", &num);
      
      for (i=0; i<num; i++)
      {
          soma = soma + i;
      }
      printf ("A soma e = %d \n", soma);
      
           
}
