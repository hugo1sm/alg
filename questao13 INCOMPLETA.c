#include <stdio.h>
#include <stdlib.h>

int main()
{
   float massa;
   int temp = 0;
   int horas;
   int minutos;
   
   printf ("Digite a massa \n");
   scanf ("%f", &massa);
   
   while (massa>0.5)
   {
       temp = temp + 50;
       massa = massa/2;
   }
   horas = temp/3600;
   minutos = temp/60;
   
   printf ("O tempo necessario e de %d horas, %d minutos e %d segundos", horas, minutos, temp);
   
   
}