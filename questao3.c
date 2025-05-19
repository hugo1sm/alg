#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num, fat = 1;
    printf ("Digite um numero \n");
    scanf ("%d", &num);
    
    
    if (num <= 0)
    {
        if (num == 0)
        printf ("1 \n");
        else
        printf ("Numero invalido \n");
        
    }
    
    if (num > 0)
      {
        for (i=1; i<=num; i++)
        {
        fat = fat*i;
        }
        printf ("O fatorial e %d \n", fat);
      }
    
       
}