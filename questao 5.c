#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int decimal=0, i;
    char binario[50];
    
    printf("Digite o binario: ");
    scanf("%s", binario);
    
    int tamanho = strlen(binario);
    tamanho--;
    
    for(i=0;i<=tamanho;i++){
    	if(binario[i]!='1' && binario[i]!='0'){
    		printf("Numero invalido \n");
    		return 0;
   		} else if (binario[i]=='1'){
    		decimal += powl(2,tamanho-i);
		}
	}
    
    printf("O decimal e= %d \n", decimal);
    
    system ("pause");
}
