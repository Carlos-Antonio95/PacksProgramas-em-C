#include <stdio.h>
#include <locale.h>
//Exercício funções e procedimentos

//procedimento Soma de 2 números com ponteiro
void Somar(int num1, int num2, float *total){
    *total = num1 + num2;

}

//procedimento Subtração de 2 números com ponteiro
void Subtracao(int num1, int num2, float *total){

    *total = num1 - num2;
 
}

//função multiplicação com retorno do resultado
float Multplicao(float num1, float num2){
    float total;
    total = num1 * num2;

    return total;
}

//função divisão com retorno de resultado
float Divisao (float num1, float num2){
    float total;
    if (num2 != 0){//se a variável num2 for diferente 0 a variável recebe a divisão
        total = num1 / num2;
        return total;
    }else {
        return 0;
    }

}

//função receber os valores digitados pelo usuário para relização de operações aritimetricas
void VDigitados (float *num1, float *num2){
            printf("Digite o primeiro número: ");
            scanf("%f",num1);
            getchar();
            printf("Digite o segundo número: ");
            scanf("%f",num2);
            getchar();

}



int main(){
setlocale(LC_ALL,"Portuguese");
    int opcao;
    float resultado,n1,n2;
    do{
        //estrutura de repetição do menu 
        printf("Digite a operação aritimetrica que deseja fazer?\n");
        printf("1 = SOMAR\n");
        printf("2 = SUBTRAIR\n");
        printf("3 = MULTIPLICAR\n");
        printf("4 = DIVIDIR\n");
        printf("0 = SAIR");
        printf("Opção: ");
        scanf("%d",&opcao);
        getchar();
        // caso a escolha do usuário seja vailada vai ser solicitado os números para serem digitados
        if(opcao >= 1 && opcao <=4){
            VDigitados(&n1,&n2);
        }
        //swhitch case chamando cada função especifica 
        switch(opcao){
            case 1:
                Somar(n1,n2,&resultado);
                printf("A soma entre %.0f + %.0f é : %.0f\n",n1,n2,resultado);
                break;

            case 2:
                Subtracao(n1,n2,&resultado);
                printf("A subtração entre %.0f + %.0f é : %.0f\n",n1,n2,resultado);
                break;
                
            case 3:
                resultado = Multplicao(n1,n2);
                printf("O resultado da multiplicação entre %.2f * %.2f é : %.2f\n",n1,n2,resultado);
                break;

            case 4:
                if(n2 != 0){
                    resultado = Divisao(n1,n2);
                    printf("O resultado da divisão entre %.2f / %.2f é : %.2f\n",n1,n2,resultado);
                }else{
                    printf("Número não divisivel por 0.\n");
                }

                break;
            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção invalida!\n");
                break;

        }


    }while(opcao != 0);


    return 0;
}