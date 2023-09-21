#include <stdio.h>
    int main(){
    unsigned int A, B;

    scanf("%u", &A);
    scanf("%u", &B);

    if(A == B){
        printf("Os valores lidos sao iguais\n");
    }
    else if(A > B){
        if(A%B == 0){
        printf("%u eh maior que %u\n%u eh multiplo de %u\n",A,B,A,B);
    }
    else{
        printf("%u eh maior que %u\n%u nao eh multiplo de %u\n",A,B,A,B);
    }
    }
    if(B > A){
        if (B%A == 0){
        printf("%u eh maior que %u\n%u eh multiplo de %u\n",B,A,B,A);
        }
    else{
        printf("%u eh maior que %u\n%u nao eh multiplo de %u\n",B,A,B,A);
     }
        return 0;
    } 
    }