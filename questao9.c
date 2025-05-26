#include <stdio.h>

main()
{
	float altura, maior=0, menor=0, medio=0, mediaMULHERES, mediaTURMA, altMULHERES, altTURMA, contTURMA=0, contMULHERES=0;
	char nome[50];
	int genero=2, i=0;
	
	for (i=0; i<=50; i++)
	{
		printf ("Digite seu nome \n");
		scanf ("%s", nome);
		printf ("Digite sua altura em cm \n");
		scanf ("%f", &altura);
		
		printf ("Defina seu genero: Digite 0 para masculino ou 1 para feminino \n");
		scanf ("%d", &genero);
		
		if (genero!=0 && genero!=1)
		{
			printf ("Genero invalido \n");
		}
		
		if (genero==1)
		{
			contMULHERES = contMULHERES + 1;
			contTURMA = contTURMA + 1;
			altMULHERES = altMULHERES + altura;
			altTURMA = altTURMA + altura;
			genero = 2;
		}
		
		else if (genero==0)
		{
			contTURMA = contTURMA + 1;
			altTURMA = altTURMA + altura;
			genero =2;
		}
		
		if (altura>maior || altura==maior)
		{
			maior = altura;
		}
		
		if (altura<maior && altura>menor)
		{
			medio = altura;
		}
		
		else
		{
			menor = altura;
		}
	}
	mediaMULHERES = altMULHERES/contMULHERES;
	mediaTURMA = altTURMA/contTURMA;
	printf ("A quantidade de alunos da turma e de %d \n", contTURMA);
	printf ("Maior altura = %f \n", maior);
	printf ("Menor altura = %f \n", menor);
	printf ("Media de altura da turma = %f \n", mediaTURMA);
	printf ("Media de altura das mulheres = %f \n", mediaMULHERES);
}
