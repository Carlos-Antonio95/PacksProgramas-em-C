#include <locale.h>
#include <stdio.h>
#include <windows.h>

//struct variaveis procedimentos aritimetricos
typedef struct{
    int opcao,contador,n1,n2,resultado;

}opAritimetrica;


//procedimentro imprime linha pontilhada
void MostrarLinha(){

    printf("------------------------\n");

}

//Fun��o de soma 2 n�meros
int soma(int num1, int num2){
    int total;
    total = num1+num2;
    
    return total;
}

//Fun��o multiplica 2 n�meros
int mult(int num1, int num2){
    int total;
    total = num1 * num2;

    return total;
}
//Fun��o divide 2 n�meros
float divi(float num1, float num2){
    float total;
    total = num1 / num2;
    
    return total;
}

//Fun��o subtrai 2 n�meros
int sub(int num1, int num2){
    int total;
    total = num1 - num2;
    
    return total;

}

//procedimento fatorial
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
    system("pause");
    printf("Voltando ao menu anterior...");
    Sleep(500);
}

//fun��o maior e menor 2 n�meros
float Maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }else if(num2 > num1){
        return num2;
    }else{
        return num1;//se os n�meros forem iguais retorna num 1
    }
}

//procedimento maior e menor
void maior(float n1, float n2){
    float resultado;
    printf("Digite 2 n�meros direi qual o maior entre eles.\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%f",&n1);
    getchar();
    printf("Digite o segundo n�mero: ");
    scanf("%f",&n2);
    getchar();
    resultado = Maior(n1,n2);
    printf("O maior n�mero � : %.2f\n",resultado);
    system("pause");

}
//procedimento 4 opera��es aritimetricas
void OperacaoAritimetrica(opAritimetrica aritimetrica){
    aritimetrica.contador = 0;
    do{
            system("cls");
            MostrarLinha();
            printf("Qual opera��o aritimetrica deseja fazer ?\n");
            printf("1 = SOMAR\n");
            printf("2 = SUBTRAIR\n");
            printf("3 = Multiplicar\n");
            printf("4 = DIVIDIR\n");
            printf("0 = SAIR\n");
            printf("Digite sua op��o: ");
            scanf("%d",&aritimetrica.opcao);
            getchar();
            MostrarLinha();
            if (aritimetrica.opcao != 0){
                aritimetrica.contador++;
                printf("Digite o primeiro n�mero: ");
                scanf("%d",&aritimetrica.n1);
                getchar();
                printf("Digite o segundo n�mero: ");
                scanf("%d",&aritimetrica.n2);
                getchar();
            }
            switch (aritimetrica.opcao){
                case 1:
                    aritimetrica.resultado = soma(aritimetrica.n1,aritimetrica.n2);
                    printf("A Soma entre %d + %d � = %d\n",aritimetrica.n1,aritimetrica.n2,aritimetrica.resultado);
                    MostrarLinha();
                    system("Pause");
                    break;
                case 2:
                    aritimetrica.resultado = sub(aritimetrica.n1,aritimetrica.n2);
                    printf("A subtra��o entre %d - %d � = %d\n",aritimetrica.n1,aritimetrica.n2,aritimetrica.resultado);
                    MostrarLinha();
                    system("Pause");
                    break;
                case 3:
                    aritimetrica.resultado = mult(aritimetrica.n1,aritimetrica.n2);
                    printf("A multiplica��o entre %d * %d � = %d\n",aritimetrica.n1,aritimetrica.n2,aritimetrica.resultado);
                    MostrarLinha();
                    system("Pause");
                    break;
                case 4:
                    aritimetrica.resultado = divi(aritimetrica.n1,aritimetrica.n2);
                    printf("A divis�o entre %d / %d � = %d\n",aritimetrica.n1,aritimetrica.n2,aritimetrica.resultado);
                    MostrarLinha();
                    system("Pause");
                    break;
                case 0:
                    printf("Voc� fez %d opera��es no programa.\n",aritimetrica.contador);
                    Sleep(500);
                    printf("Voltando ao menu principal...");
                    Sleep(500);
                    default:
                    break;
                }


    }while(aritimetrica.opcao != 0);

}
//procedimento para veior o maior e menor de X n�meros digitados pelo usu�rio
void MaiorMenor(){
    int maior = 0, menor = 0;
    int quantidadeNum,opcao;
    printf("Programa exibir maior e o menor n�meros digitados.\n");
    printf("Quantos n�meros deseja digitar ?\n");
    printf("Direi qual o menor e o maior desses n�meros digitados.\n");
    printf("Quantidade de n�meros: ");
    scanf("%d",&quantidadeNum);
    getchar();
    int vetor[quantidadeNum];
    for(int i = 0 ; i < quantidadeNum; i++){
        printf("Digite o %d� n�mero: ",i+1);
        scanf("%i",&vetor[i]);
        getchar();
        if (i == 0){maior = vetor[i];menor = vetor[i];}
        if(vetor[i] > maior){
            maior = vetor[i];
        }else{
            if (vetor[i] < menor){
                menor = vetor[i];
            }
        }

    }
    MostrarLinha();
    printf("\nO maior valor digitado �: %d\n",maior);
    printf("O menor valor digitado � : %d\n",menor);
    MostrarLinha();
    printf("Deseja inciar o programa novamente ? 1 = SIM / 2 = N�O: ");
    scanf("%d",&opcao);
    if(opcao == 1){
        MaiorMenor();
    }else if(opcao == 2){
        printf("Retornando ao menu principal...\n");
        Sleep(1000);
    }else{
        printf("Retornando ao menu principal...\n");
        Sleep(1000);
    }


}


int main(){
    setlocale(LC_ALL,"Portuguese");
    opAritimetrica aritimetrica;
    int fato, resultadoo;
    int opcao1; // variavel swhitch case menu principal
    int parar = 0;
    int n1,n2,Nmaior,Nmenor;
    while (parar == 0){

        system("cls");
        printf("1 = Fatorial\n");
        printf("2 = Opera��es aritimetricas\n");
        printf("3 = N�merio maior.\n");
        printf("4 = N�mero maior e menor.\n");
        printf("0 = SAIR\n");
        printf("Escolha sua op��o: ");
        scanf("%d",&opcao1);
        getchar();
        system("cls");
        MostrarLinha();
        switch(opcao1){
        case 1:
            Fatorial(fato, resultadoo);
            break;
        case 2:
            OperacaoAritimetrica(aritimetrica);
            break;
        case 3:
            maior(n1,n2);
            break;
        case 4:
            MaiorMenor();
            break;
        case 0:
            printf("Saindo do programa...\n");
            Sleep(500);
            parar = 1;
            break;
        default:
            printf("Op��o invalida");
            Sleep(500);
            break;
        }

    }
    return 0;
}