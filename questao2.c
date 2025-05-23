#include <stdio.h>

main()
{
	int i;
	float a, b, c, menor, medio, maior;
	
	printf ("Digite o valor de i (1, 2 ou 3) \n");
	scanf ("%d", &i);
	printf ("Digite o valor de A \n");
	scanf ("%f", &a);
	printf ("Digite o valor de B \n");
	scanf ("%f", &b);
	printf ("Digite o valor de C \n");
	scanf ("%f", &c);
	
	if (a==0 || b==0 || c==0)
	{
		printf ("A, B, e C, nao podem ser iguais a 0");
	}
	
	if (a>=b)
	{
		if (a>=c)
		{
			maior = a;
			if (b>=c)
			{
				menor = c;
				medio = b;
			}
			else
			{
				menor = b;
				medio = c;
			}
		}
		else
		{
			maior = c;
			medio = a;
			menor = b;
		}
	}
	else if (b>=c)
	{
		maior = b;
		if (a>=c)
		{
			medio = a;
			menor = c;
		}
	}
	else
	{
		maior = c;
		medio = b;
		menor = a;
	}
	
	switch(i)
	{
		case 1:
			printf (" %f, %f, %f \n", menor, medio, maior);
			break;
		case 2:
			printf (" %f, %f, %f \n", maior, medio, menor);
			break;
		case 3:
			printf (" %f, %f, %f \n", menor, maior, medio);
			break;
	}
}
