// Exercício 7 (Do-While): Desenvolva um programa com um menu interativo, na opção 1, deverá fazer uma calculadora, na opção 2 , solicitar um número do usuário e fazer sua tabuada, na opção 3, calcular sua média, na opção 4, mostrar se o número informado é par ou impar, na opção 5, finalizar o programa.

#include <stdio.h>
#include <locale.h>

float calculadora(int num1, int num2,char op){
    if(op == '+'){
        return num1 + num2;
    }else if(op == '-'){
        return num1 - num2;
    }else if(op == '/'){
        return num1 / num2;
    }else if (op == '*'){
        return num1 * num2;
    }
}

void Tabuada(float num){
        for(int i = 1; i <= 10; i++){
        printf("%0.f + %d = %0.f\n",num,i,i+num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f - %d = %0.f\n",num,i,i-num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f x %d = %0.f\n",num,i,i*num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f / %d = %2.f\n",num,i,num/i);
    }

    
}

float media(int num1, int num2){
    return (num1 + num2) / 2;

}

const char* parImpar(int num){
    if (num % 2 == 0){
        return "Par\n";
    }else{
        return "Impar\n";
    }
}

void xau(){
    printf("Programa finalizado com sucesso!\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op;
    float num2, num1;
    char cal;
    do{
        printf("\tMENU\n");
        printf("1 - CALCULADORA\n");
        printf("2 - Tabuada\n");
        printf("3 - Média\n");
        printf("4 - Par ou ímpar\n");
        printf("5 - Sair do programa.\n");
        printf("Sua opção: ");
        scanf("%d",&op);
            switch(op){
                case 1: 
                    printf("Digite o primeiro número: ");
                    scanf("%f",&num1);
                    printf("Digite o segundo número: ");
                    scanf("%f",&num2);
                    printf("Qual opção aritimetrica deseja fazer ?(+ - * /)\n");
                    do{
                        scanf("%c",&cal);
                    }while(cal != '+' && cal!= '-' && cal != '*' && cal != '/');
                    printf("O resultado de %0.f %c %0.f é: %2.f\n",num1,cal,num2,calculadora(num1,num2,cal));
                break;

                case 2:
                    do{
                        printf("Digite um número direi a tabuada dele: ");
                        scanf("%f",&num1);
                        if(num1 <= 0){
                            printf("Digite um número maior que 0\n");
                        }
                    }while(num1 <=0);
                    Tabuada(num1);
                break;

                case 3:
                    do{
                        printf("Digite 2 números farei a média deles.\n");
                        printf("Digite o primeiro número: ");
                        scanf("%f",&num1);
                        printf("Digite o segundo número: ");
                        scanf("%f",&num2);
                        if(num1 <= 0 || num2 <= 0){
                            printf("Digite números maiores que 0\n");
                        }
                    }while(num1 <= 0 || num2 <=0);
                    printf("A média dos números digitados é: %.2f",media(num1,num2));
                break;

                case 4:
                    printf("Digite um número direi se ele é par ou ímpar: ");
                    scanf("%d",&op);
                    printf("O número digitado é: %s",parImpar(op));
                    op = 0;
                break; 

                case 5:
                xau();
                break;

                default:
                    printf("Opção invalida!\n");
                break;



        }


    }while(op != 5);





    return 0;
}