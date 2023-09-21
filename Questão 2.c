#include <stdio.h>
    int main(){
     unsigned int n, n1, n2;
    unsigned int soma = 0;

    scanf("%u",&n);

    for(n2 = n;n != 0;n /= 10){
        n1 = n %10;
        soma += n1;
    }
        if(n %2==0){
            printf("%u eh par\n",n2);
        }
        else{
            printf("%u eh impar\n",n2);
        }
        printf("A soma dos algarismos de %u eh %u\n",n2,soma);

        return 0;
    }