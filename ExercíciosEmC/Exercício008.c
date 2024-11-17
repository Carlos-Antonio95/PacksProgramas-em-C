// Exerc�cio 7 (Do-While): Desenvolva um programa com um menu interativo, na op��o 1, dever� fazer uma calculadora, na op��o 2 , solicitar um n�mero do usu�rio e fazer sua tabuada, na op��o 3, calcular sua m�dia, na op��o 4, mostrar se o n�mero informado � par ou impar, na op��o 5, finalizar o programa.

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
        printf("3 - M�dia\n");
        printf("4 - Par ou �mpar\n");
        printf("5 - Sair do programa.\n");
        printf("Sua op��o: ");
        scanf("%d",&op);
            switch(op){
                case 1: 
                    printf("Digite o primeiro n�mero: ");
                    scanf("%f",&num1);
                    printf("Digite o segundo n�mero: ");
                    scanf("%f",&num2);
                    printf("Qual op��o aritimetrica deseja fazer ?(+ - * /)\n");
                    do{
                        scanf("%c",&cal);
                    }while(cal != '+' && cal!= '-' && cal != '*' && cal != '/');
                    printf("O resultado de %0.f %c %0.f �: %2.f\n",num1,cal,num2,calculadora(num1,num2,cal));
                break;

                case 2:
                    do{
                        printf("Digite um n�mero direi a tabuada dele: ");
                        scanf("%f",&num1);
                        if(num1 <= 0){
                            printf("Digite um n�mero maior que 0\n");
                        }
                    }while(num1 <=0);
                    Tabuada(num1);
                break;

                case 3:
                    do{
                        printf("Digite 2 n�meros farei a m�dia deles.\n");
                        printf("Digite o primeiro n�mero: ");
                        scanf("%f",&num1);
                        printf("Digite o segundo n�mero: ");
                        scanf("%f",&num2);
                        if(num1 <= 0 || num2 <= 0){
                            printf("Digite n�meros maiores que 0\n");
                        }
                    }while(num1 <= 0 || num2 <=0);
                    printf("A m�dia dos n�meros digitados �: %.2f",media(num1,num2));
                break;

                case 4:
                    printf("Digite um n�mero direi se ele � par ou �mpar: ");
                    scanf("%d",&op);
                    printf("O n�mero digitado �: %s",parImpar(op));
                    op = 0;
                break; 

                case 5:
                xau();
                break;

                default:
                    printf("Op��o invalida!\n");
                break;



        }


    }while(op != 5);





    return 0;
}