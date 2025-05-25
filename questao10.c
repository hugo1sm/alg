#include <stdio.h>

main()
{
	int numero, anterior=0, seq=0, seqAux;
		
	while (numero>=0)
	{
		printf ("Digite um numero \n\n\n");
	    scanf ("%d", &numero);
	    
	    if (numero>anterior)
	    {
	    	seq++;
	    	printf ("O numero atual (%d) e MAIOR que o anterior (%d): sequencia atualizada: %d \n\n\n", numero, anterior, seq);
		}
		else if (numero>0)
		{
			seqAux = seq;
			seq = 1;
			printf ("O numero atual (%d) e MENOR que o anterior (%d): sequencia atualizada: %d \n\n\n", numero, anterior, seq);
//			printf ("Sequencia auxiliar = %d \n\n\n", seqAux);
		}
		anterior = numero;
		printf ("Digite -1 para encerrar! \n\n\n");
	}
	if (seqAux>seq)
	{
		seq = seqAux;
	}
	printf ("A maior sequencia crescente e = %d \n\n\n", seqAux);
}
