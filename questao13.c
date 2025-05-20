#include <stdio.h>
#include <stdlib.h>

main()
{
	int temp = 0, horas, minutos, segundos;
	float massainicial, massafinal;
	
	printf ("Digite o valor da massa \n");
	scanf ("%f", &massainicial);
	
	massafinal = massainicial;
	
	while (massafinal>0.5)
	{
	temp = temp + 50;
	massafinal = massafinal/2;
    } 
    
    horas = temp/3600;
    minutos = temp/60;
    
    if (temp>=60)
    {
    	segundos = temp%60;
    	printf ("O tempo e de %d horas, %d minutos e %d segundos \n", horas, minutos, segundos);
    	printf ("Massa inicial e de %f \n", massainicial);
    	printf ("Massa final e de %f \n", massafinal);
	}
	else
	{
		printf ("O tempo e de %d \n", temp);
		printf ("Massa inicial e de %f \n", massainicial);
    	printf ("Massa final e de %f \n", massafinal);
	}
	
}
