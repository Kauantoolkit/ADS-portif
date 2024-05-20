#include <stdio.h>


float divisaox(int valor){
    float divisao;
    divisao = valor/1920.0;

    return divisao;
}
float divisaoy(int valor){
    float divisao;
    divisao = valor/1080.0;

    return divisao;
}

int main(){
int input1=0, input2=0;
float divisao,porcentagemx,porcentagemy;

    while(1){
        printf("valor de x");
        scanf("%i",&input1);
        printf("valor de y");
        scanf("%i",&input2);
        if (input1 == 12345 || input2 == 12345){
            printf("fechando");
            break;
        }
        porcentagemx = divisaox(input1)*100;
        porcentagemy = divisaoy(input2)*100;
        printf("a porcentagem para x eh:%f\na porcentagem para y eh:%f\n",porcentagemx,porcentagemy);
    }

    return 0;
}