#include <stdio.h>
int main(){
int x;

    scanf("%d",&x);
for(int i = 1800;i < 2022;i++){
    
    if(x == 1916 || x == 1940 || x == 1944 || x == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n",x);
        break;
    }
    else if(x >= 1930 && x <= 2022 && (x - 1930)%4 == 0){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",x);
        break;
    }
    else if(x >= 1896 && x <= 2022 && (x - 1896)%4 == 0){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",x);
        break;
    }
    else{
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n",x);
        break;
    }
}
    return 0;
}
