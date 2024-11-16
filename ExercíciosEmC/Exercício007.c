
// Exéricio 7 (Do-Whilhe): Desenvolva um programa que tenha um menu interativo, e ao escolher a opção 1, deverá calcular a soma de 2 numeros informados pelo usuário, na opção 2, devera solicitar 2 números do usuário e mostrar sua média, e na opcção 3, finalizar o programa.

#include <stdio.h>
#include <locale.h>

int soma (int num1, int num2){
    return num1 + num2;
}

float media(float num1, float num2){
    return (num1 + num2) / 2.0;
}

void linha(){

    printf("____________________\n");
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1,num2,op;

    do{ 
        linha();
        printf("\tMENU\n");
        printf("1 = Somar.\n");
        printf("2 = Média.\n");
        printf("3 = Sair.\n");
        linha();
        printf("Sua opção: ");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Digite 1º número: ");
                scanf("%d",&num1);
                printf("Digite 2º número: ");
                scanf("%d",&num2);
                printf("A soma de %d + %d é: %d\n",num1,num2,soma(num1,num2));
            break;
            case 2:
                printf("Digite o 1º número: ");
                scanf("%d",&num1);
                printf("Digite o 2º número: ");
                scanf("%d",&num2);
                printf("A média entre %d e %d é: %.2f\n",num1,num2,media(num1,num2));
            break;
            case 3:
                printf("Finalizando programa...\n");
            break;


            default:
                printf("Opção invalida!");
            break;
        }


    }while(op != 3);

    return 0;
}