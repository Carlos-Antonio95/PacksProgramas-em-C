#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    //exe 01
    int operacao;
    int n1exe1;
    //exe 02
    float n1exe2,n2exe2;
    char opexe2;
    //exe 03
    int n1,n2,n3;

    //exe 05
    int somaexe5 =0;
    int paresexe5 = 0;

    //exe 06
    int fatoexe6, numexe6;
        fatoexe6 = 1;

    //exe07
     int opcaoexe7,numeroexe7;
     //exe08
     float notaexe8,mediaexe8;

     //exe09
      int numeroexe09, tabuadaexe09;

    //exe10
    int numeroexe10;
    int somadorexe10 = 0;

    int x = 0;
    while (x == 0)//estrutura de repetição para não finalizar o programa no fim de cada uso.
    {

    
    printf("\nQual questão deseja ver ? 1 a 10 (Digite 0 para finalizar o programa): ");//Pergunta ao usuario qual questão ele deseja acessar
    scanf("%i",&operacao);
    switch (operacao){
    case 1:
        
        printf("Digite um número verificarei se é ímpa ou par: ");
        scanf("%i",&n1exe1);
        getchar();
        if(n1exe1 % 2 == 0){
            printf("\nO número %i é par.",n1exe1);
        }else{
            printf("\nO número %i é ímpar.",n1exe1);
        } 
    break;

    case 2:
    printf ("Digite o primeiro e segundo número: ");
    scanf("%f %f",&n1exe2,&n2exe2);
    getchar();
    printf("Digite a operação aritimetrica que deseja fazer(+ / - *)");
    scanf(" %c",&opexe2);
    switch (opexe2){
    case '+':
        printf("A soma entre %.0f e %.0f equivale a: %.0f",n1exe2,n1exe2,n1exe2+n2exe2);
        break;
    case '-':
        printf("A subtração entre %.0f e %.0f equivale a: %.0f",n1exe2,n1exe2,n1exe2-n2exe2);
        break;
    case '/':
        if(n2exe2 == 0 || n1exe2 == 0){
            printf("Não é possivel dividir um número por 0");
        }else{
            printf("A divisão entre %.0f e %.0f equivale a: %.2f",n1exe2,n1exe2,n1exe2/n2exe2);  
        }
        break;
    case '*':
        printf("A multiplicação entre %.0f e %.0f equivale a: %.2f",n1exe2,n1exe2,n1exe2*n2exe2);
        break;
    default:
        printf("Operação aritimetrica invalida.");
        break;
    }
    break;

    case 3:
    
    printf("Digite 3 números consecutivos e direi qual é o maior dos 3: ");
    scanf("%i %i %i",&n1,&n2,&n3);
    getchar;
    if(n1 >= n2 && n1 >= n3){
        printf("O maior número é %i",n1);
    }else if(n2 >= n1 && n2 >= n3){
        printf("O maior número é %i",n2);
    }else if(n3 >= n1 && n3 >= n2){
        printf("O maior número é %i",n3);
    }else{
        printf("Todos os números são iguais");
    }

    break;
    
    case 4:
    for(int i = 1; i <=100; i++){
        printf("%i ",i);
    }

    break;

    case 5:
        while (paresexe5 < 100){
            paresexe5 = paresexe5 + 2;
            printf("%i ",paresexe5);
        
            somaexe5 = paresexe5 + somaexe5;
        

        }
    printf(" = %i",somaexe5);

    break;

    case 6:
        printf("Digite um número, mostrarei o fatorial dele: ");
        scanf("%i",&numexe6);
        getchar;
        printf("%i! = ",numexe6);
        while (numexe6 > 1){
            fatoexe6 = fatoexe6 * numexe6;
            printf("%i x ",numexe6);
            numexe6 = numexe6 -1;
        }
        printf("1 = %i",fatoexe6);

    break;

    case 7:

        do{

        printf("Digite um número: ");
        scanf("%i",&numeroexe7);
        getchar();
        printf("        Menu\n");
        printf("1. verificar se o número é positivo ou negativo.\n");
        printf("2. Verificar se o número é par ou impar.\n");
        printf("3. Sair do programa.\n");
        printf("Escolha sua opção: ");
        scanf("%i",&opcaoexe7);

        switch(opcaoexe7){
            case 1:
                if(numeroexe7 >= 1){
                    printf("O número %i é positivo.\n",numeroexe7);
                }else{
                    printf("O número %i é negativo.\n",numeroexe7);
                }

            break;
            case 2:
                if (numeroexe7 % 2 == 0){
                printf("O número %i é par.\n",numeroexe7);
                }else{
                    printf("O número %i é impar.\n",numeroexe7);
                }
            case 3:
                printf("Saindo do programa...");
                break;
                
            default:
            printf("Opção invalida.");
            break;
            }
        } while (opcaoexe7 != 3);




    break;

    case 8:
        for (int i = 1; i <= 4; i++)
        {
            printf("Digite sua %iº nota: ",i);
            scanf("%f",&notaexe8);
            mediaexe8 = mediaexe8 + notaexe8;
        }
        if (mediaexe8 / 4 >= 7){
            printf("O aluno foi aprovado. Com média %.2f",mediaexe8/4);
        }else{
            printf("O aluno foi reprovado. Com média %.2f",mediaexe8/4);
        }

    break;

    case 9:
        printf("Digite um número: ");
        scanf("%i",&numeroexe09);
        getchar();
        printf("Tabuada de soma\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i + %i = %i\n",i,numeroexe09,numeroexe09+i);
        }
        printf("Tabuada de sutração\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i - %i = %i\n",i,numeroexe09,numeroexe09-i);
        }
        printf("Tabuada de mult\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i x %i = %i\n",i,numeroexe09,numeroexe09*i);
        }
        printf("Tabuada de div\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i / %i = %i\n",i,numeroexe09,numeroexe09/i);
        }

    break;

    case 10:

        do{
        printf("Digite um número: ");
        scanf("%i",&numeroexe10);
        somadorexe10 = somadorexe10 + numeroexe10;
        printf("\nA soma dos números digitados é: %i\n",somadorexe10);
        printf("Digite 0 para sair.");



        }while(numeroexe10 != 0);


    break;

    case 0:
    x = x +1;
    break;
    
    default:
    printf("Operação invalida.");
        break;
    }


}
   
    Sleep(500);
    printf("Finalizando programa...");


return 0;


}