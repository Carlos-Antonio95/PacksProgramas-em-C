#include <stdio.h>
#include <locale.h>

void Somar(int num1, int num2){
    int total;
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    getchar();
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    getchar();
    total = num1 + num2;
    printf("O resultado da soma entre %d + %d é : %d\n",num1,num2,total);
}

void Subtracao(int num1, int num2){
    int total;
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    getchar();
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    getchar();
    total = num1 - num2;
    printf("O resultado da subtração entre %d - %d é : %d\n",num1,num2,total);
}

float Multplicao(float num1, float num2){
    float total;
    total = num1 * num2;

    return total;
}

float Divisao (float num1, float num2){
    float total;
    if (num2 != 0){
        total = num1 / num2;
        return total;
    }else {
        return 0;
    }

}



int main(){
setlocale(LC_ALL,"Portuguese");
    int opcao;
    float resultado,n1,n2;
    do{
        printf("Digite a operação aritimetrica que deseja fazer?\n");
        printf("1 = SOMAR\n");
        printf("2 = SUBTRAIR\n");
        printf("3 = MULTIPLICAR\n");
        printf("4 = DIVIDIR\n");
        printf("Opção: ");
        scanf("%d",&opcao);
        getchar();
        switch(opcao){
            case 1:
                Somar(n1,n2);
                break;

            case 2:
                Subtracao(n1,n2);
                break;
                
            case 3:
                printf("Digite o primeiro número: ");
                scanf("%f",&n1);
                getchar();
                printf("Digite o segundo número: ");
                scanf("%f",&n2);
                getchar();
                resultado = Multplicao(n1,n2);
                printf("O resultado da multiplicação entre %.2f * %.2f é : %.2f\n",n1,n2,resultado);
                break;

            case 4:
                printf("Digite o primeiro número: ");
                scanf("%d",&n1);
                getchar();
                printf("Digite o segundo número: ");
                scanf("%d",&n2);
                getchar();
                if(n2 != 0){
                    resultado = Divisao(n1,n2);
                    printf("O resultado da divisão entre %.2f / %.2f é : %.2f\n",n1,n2,resultado);
                }else{
                    printf("Número não divisivel por 0.\n");
                }

                break;
            case 0:
                printf("Saindo do programa...\n");

            default:
                printf("Opção invalida!");
                break;

        }


    }while(opcao != 0);


    return 0;
}