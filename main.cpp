#include<stdio.h>
#include<stdlib.h>

main(){
       
    int maior;
    int A, B;
    
    printf("Digite um numero inteiro A:");
    scanf("%i", &A);
        
    printf("Digite um numero inteiro B:");
    scanf("%i", &B);
    
       
        if(A > B){
        maior = A;
        printf("O maior numero eh : %d\n", maior);
        }
        else{
            maior = B;        
            printf("O maior numero eh : %d\n", maior);
            }
            system ("pause");
        }       
          
        
    
