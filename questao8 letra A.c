#include <stdio.h>

main()
{
	float soma;
	int i;
	
	for (i=0; i<100; i++)
	{
		if (i%2 != 0)
		{
			soma = soma + 1.0/i;
		}
	}
	
	printf (" %f", soma);
}
