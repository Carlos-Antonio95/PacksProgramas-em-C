
// Ex�ricio 7 (Do-Whilhe): Desenvolva um programa que tenha um menu interativo, e ao escolher a op��o 1, dever� calcular a soma de 2 numeros informados pelo usu�rio, na op��o 2, devera solicitar 2 n�meros do usu�rio e mostrar sua m�dia, e na opc��o 3, finalizar o programa.

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
        printf("2 = M�dia.\n");
        printf("3 = Sair.\n");
        linha();
        printf("Sua op��o: ");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Digite 1� n�mero: ");
                scanf("%d",&num1);
                printf("Digite 2� n�mero: ");
                scanf("%d",&num2);
                printf("A soma de %d + %d �: %d\n",num1,num2,soma(num1,num2));
            break;
            case 2:
                printf("Digite o 1� n�mero: ");
                scanf("%d",&num1);
                printf("Digite o 2� n�mero: ");
                scanf("%d",&num2);
                printf("A m�dia entre %d e %d �: %.2f\n",num1,num2,media(num1,num2));
            break;
            case 3:
                printf("Finalizando programa...\n");
            break;


            default:
                printf("Op��o invalida!");
            break;
        }


    }while(op != 3);

    return 0;
}