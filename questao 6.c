#include <stdio.h>

int main()
{
    int decimal, i;
    int binario[16];
    int termos=0,cont=15;
    
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    
    while(decimal>1){ 
        
        binario[cont]=decimal%2;  
        
        decimal/=2; 
        cont--; 
        termos++; 
    }
    
    binario[cont]=1;
    cont--; 
    termos++; 
    
    
    for(i=cont; i<16 ; i++){
        printf("%d", binario[i]);
    }
    return 0;
}
