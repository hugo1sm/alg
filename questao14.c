#include <stdio.h>

main()
{
	int n, i, atual = 1, anterior = 0, proximo;
	printf ("Digite o numero de termos \n");
	scanf ("%d", &n);
	printf (" %d - %d -", anterior, atual);
	
	for (i=0; i<n; i++)
	{
		proximo = atual + anterior;
		anterior = atual;
		atual = proximo;
		printf (" %d -", proximo);
    }   
    
}
