#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=90000;
    float b=200000;
    int anos = 0;
    
    for (anos=0; a<=b; anos++)
    {
        a=a*1.03;
        b=b*1.015;
    }
    printf ("A quantidade de anos para a populacao de A passar a de B e de %d", anos);

}