#include <stdio.h>
    int main(){
    int n, n1, n2;
    int soma = 0;

    scanf("%d",&n);

    for(n2 = n;n != 0;n /= 10){
        n1 = n %10;
        soma += n1;
    }
        if(n %2==0){
            printf("%d eh par\n",n2);
        }
        else{
            printf("%d eh impar\n",n2);
        }
        printf("A soma dos algarismos de %d eh %d\n",n2,soma);

        return 0;
    }