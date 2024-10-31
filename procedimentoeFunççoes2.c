#include <stdio.h>
#include <locale.h>
//Exerc�cio fun��es e procedimentos

//procedimento Soma de 2 n�meros com ponteiro
void Somar(int num1, int num2, float *total){
    *total = num1 + num2;

}

//procedimento Subtra��o de 2 n�meros com ponteiro
void Subtracao(int num1, int num2, float *total){

    *total = num1 - num2;
 
}

//fun��o multiplica��o com retorno do resultado
float Multplicao(float num1, float num2){
    float total;
    total = num1 * num2;

    return total;
}

//fun��o divis�o com retorno de resultado
float Divisao (float num1, float num2){
    float total;
    if (num2 != 0){//se a vari�vel num2 for diferente 0 a vari�vel recebe a divis�o
        total = num1 / num2;
        return total;
    }else {
        return 0;
    }

}

//fun��o receber os valores digitados pelo usu�rio para reliza��o de opera��es aritimetricas
void VDigitados (float *num1, float *num2){
            printf("Digite o primeiro n�mero: ");
            scanf("%f",num1);
            getchar();
            printf("Digite o segundo n�mero: ");
            scanf("%f",num2);
            getchar();

}



int main(){
setlocale(LC_ALL,"Portuguese");
    int opcao;
    float resultado,n1,n2;
    do{
        //estrutura de repeti��o do menu 
        printf("Digite a opera��o aritimetrica que deseja fazer?\n");
        printf("1 = SOMAR\n");
        printf("2 = SUBTRAIR\n");
        printf("3 = MULTIPLICAR\n");
        printf("4 = DIVIDIR\n");
        printf("0 = SAIR");
        printf("Op��o: ");
        scanf("%d",&opcao);
        getchar();
        // caso a escolha do usu�rio seja vailada vai ser solicitado os n�meros para serem digitados
        if(opcao >= 1 && opcao <=4){
            VDigitados(&n1,&n2);
        }
        //swhitch case chamando cada fun��o especifica 
        switch(opcao){
            case 1:
                Somar(n1,n2,&resultado);
                printf("A soma entre %.0f + %.0f � : %.0f\n",n1,n2,resultado);
                break;

            case 2:
                Subtracao(n1,n2,&resultado);
                printf("A subtra��o entre %.0f + %.0f � : %.0f\n",n1,n2,resultado);
                break;
                
            case 3:
                resultado = Multplicao(n1,n2);
                printf("O resultado da multiplica��o entre %.2f * %.2f � : %.2f\n",n1,n2,resultado);
                break;

            case 4:
                if(n2 != 0){
                    resultado = Divisao(n1,n2);
                    printf("O resultado da divis�o entre %.2f / %.2f � : %.2f\n",n1,n2,resultado);
                }else{
                    printf("N�mero n�o divisivel por 0.\n");
                }

                break;
            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Op��o invalida!\n");
                break;

        }


    }while(opcao != 0);


    return 0;
}