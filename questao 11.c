#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char palavra[100];
	int i;
	
	printf("Digite o nome: ");
	scanf("%s", palavra);
	
	int tamanho = strlen(palavra);
	
	char Invertida[tamanho];
	
	for(i=0;i<tamanho;i++){
		Invertida[i] = palavra[tamanho-1-i];
	}
	Invertida[tamanho]='\0';
		
	if (strcmp (palavra, Invertida) == 0){
       printf("Palindromo \n");
  }
  else 
    {
       printf ("Nao e palindromo \n");
    }
    system ("pause");
}
