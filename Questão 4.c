#include <stdio.h>
    int main(){
    char nivel, a, b, c;
    float salario;
    float salario_novo;

    scanf("%c", &nivel);
    scanf("%f", &salario);

   if(nivel == 'a'){
    salario_novo = 0.05 * salario;
    salario_novo = salario_novo + salario;
    printf("R$ %.2f\n",salario_novo);
}
    else if(nivel == 'b'){
    salario_novo = 0.07 * salario;
    salario_novo = salario_novo + salario;
    printf("R$ %.2f\n",salario_novo);
}
    else if(nivel == 'c'){
    salario_novo = 0.08 * salario;
    salario_novo = salario_novo + salario;
    printf("R$ %.2f\n",salario_novo);
}
        return 0;
    }