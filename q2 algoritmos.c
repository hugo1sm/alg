#include <stdio.h>
#include <stdlib.h>

main(){
       
       int i;
       float a, b, c, maior, menor, medio;
       
       printf("Digite o valor de i \n");
       scanf("%d", &i);
       printf("Digite o valor de a \n");
       scanf("%f", &a);
       printf("Digite o valor de b \n");
       scanf("%f", &b);
       printf("Digite o valor de c \n");
       scanf("%f", &c);
                   
       
       if (i == 1)
          {
                if (a>b)
                {
                 menor = b;
                 maior = a  ;     
                }
                else
                {
                    menor = a;
                    maior = b;
                }
                if (c > maior)
                {
                    maior = medio;
                    c = maior;
                }
                else 
                {
                    if (c > menor && c < maior)
                    {
                          c = medio;    
                    }
                    else
                    {
                    if (c < menor)
                    {
                          menor = medio;
                          c = menor;
                    }
                    }
               }
                printf ("%f, %f, %f \n", menor, medio, maior);
                
         } 
          
          
          system ("pause");
}      
