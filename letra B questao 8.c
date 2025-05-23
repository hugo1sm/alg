#include <stdio.h>

main()
{
	int i, indicador = 1, DENimpar = 1;
	float soma = 0.0;
	
	for (i=0; i<20; i++)
	{
		if (indicador == 1)
		{
			soma = soma + 1.0 / DENimpar;
		}
		else
		{
			soma = soma - 1.0 / DENimpar;
		}
		DENimpar = DENimpar + 2;
		indicador = 1 - indicador;
	}
	
	printf ("A soma dos 20 primeiros termos e = %f", soma);
	
}
