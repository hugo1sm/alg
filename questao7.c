#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int numero, soma, i;
	printf ("Digite um numero \n");
	scanf ("%d", &numero);
	
	for (i=1; i<numero; i++)
	{
		if (numero%i == 0)
		{
			soma = soma + i;
		}
	}
	if (numero==soma)
	{
		printf ("O numero %d e perfeito \n", numero);
	}
	else
	{
		printf ("O numero %d nao e perfeito \n", numero);
	}
	
}
