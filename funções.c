#include <locale.h>
#include <stdio.h>
#include <windows.h>

int soma(int num1, int num2){
    int total;
    total = num1+num2;
    
    return total;
}

int mult(int num1, int num2){
    int total;
    total = num1 * num2;

    return total;
}

float divi(float num1, float num2){
    float total;
    total = num1 / num2;
    
    return total;
}

int sub(int num1, int num2){
    int total;
    total = num1 - num2;
    
    return total;

}

void Fatorial(int fato, int num){
    printf("Digite o n�mero que deseja saber o fatorial: ");
    scanf("%d",&num);
    getchar();
    printf("%d! ",num);
    for(fato = 1 ; num > 1; num --){
        fato = fato * num;
        printf("%d x ",num);
    }
    printf("1 = %d\n",fato);

}


void MostrarLinha(){

    printf("------------------------\n");

}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int fato, resultadoo;
    int n1,n2,resultado,opcao,opcao1;
    int contador;
    contador = 0;
    printf("1 = Fatorial\n");
    printf("2 = Opera��es aritimetricas\n");
    printf("Escolha sua op��o:\n");
    scanf("%d",&opcao1);
    getchar();
    system("cls");
    MostrarLinha();
    if(opcao1 == 1){
        Fatorial(fato, resultadoo);
    }else if(opcao1 == 2){
        do{
        system("cls");
        printf("Digite o primeiro n�mero: ");
        scanf("%d",&n1);
        getchar();
        printf("Digite o segundo n�mero: ");
        scanf("%d",&n2);
        getchar();
        MostrarLinha();
        printf("Qual opera��o aritimetrica deseja fazer com os n�meros?\n");
        printf("1 = SOMAR\n");
        printf("2 = SUBTRAIR\n");
        printf("3 = Multiplicar\n");
        printf("4 = DIVIDIR\n");
        printf("0 = SAIR\n");
        printf("Digite sua op��o: ");
        scanf("%d",&opcao);
        getchar();
        MostrarLinha();
        if (opcao != 0){
            contador++;
        }
        switch (opcao){
            case 1:
                resultado = soma(n1,n2);
                printf("A Soma entre %d + %d � = %d\n",n1,n2,resultado);
                MostrarLinha();
                break;
            case 2:
                resultado = sub(n1,n2);
                printf("A subtra��o entre %d - %d � = %d\n",n1,n2,resultado);
                MostrarLinha();
                break;
            case 3:
                resultado = mult(n1,n2);
                printf("A multiplica��o entre %d * %d � = %d\n",n1,n2,resultado);
                MostrarLinha();
                break;
            case 4:
                resultado = divi(n1,n2);
                printf("A divis�o entre %d / %d � = %d\n",n1,n2,resultado);
                MostrarLinha();
                break;
            case 0:
                printf("Voc� fez %d opera��es no programa.\n",contador);
                Sleep(500);
                printf("Saindo do programa...");
                Sleep(500);
                default:
                break;
            }


        }while(opcao != 0);
    }else{
        printf("Op��o invalida!\n");
    }
   


    return 0;
}