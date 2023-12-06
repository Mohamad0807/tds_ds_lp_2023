#include <stdio.h>

int main()
{   
    int resultado[10];
    int calculacao=0;
    int totalDaSoma=0;
        
    for(int i = 1; i <= 10; i++){
        
        resultado[i]=0;
        
    for(int j = 0; j <= 10; j++){
        calculacao = i*j;
        
        printf("\n %d X %d = %d", i, j, calculacao);

        resultado[i] = resultado[i] + calculacao;
        
        totalDaSoma = totalDaSoma + calculacao;
    }
    
       printf("\n Valor da tabuada: %d", resultado[i]);
    
    } 
    
        printf("\n O TOTAL DA SOMA DAS TABUADAS É: %d \n", totalDaSoma);
    
        return 0;
}

