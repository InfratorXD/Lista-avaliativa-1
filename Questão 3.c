#include <stdio.h>
int main() {
int n,n1;
int senha_invalida;

scanf("%d", &n1);
printf("senha cadastrada: %d\n", n1);

for(senha_invalida = n;senha_invalida != n1;){
    scanf("%d", &n);
    if(n != n1){
        printf("senha invalida!\n", senha_invalida);
    }
    else{
        printf("senha valida!\n", n1);
        break;
    }
}
    return 0;
}