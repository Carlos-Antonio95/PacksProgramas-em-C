#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*Segue uma lista com 10 exercÃ­cios de lÃ³gica de programaÃ§Ã£o em C, utilizando as estruturas de controle if, if-else, switch, while, do-while e for. Certifique-se de utilizar os comandos de entrada e saÃ­da adequados para receber os dados e exibir os resultados. NÃ£o se autossabote! Execute os exercÃ­cios com dedicaÃ§Ã£o para alcanÃ§ar sucesso em seus objetivos.

1. VerificaÃ§Ã£o de Par ou Ãmpar
Escreva um programa que receba um nÃºmero inteiro do usuÃ¡rio e use a estrutura if-else para verificar se o nÃºmero Ã© par ou Ã­mpar. O programa deve exibir o resultado correspondente.

2. Calculadora Simples com switch
Crie um programa que simule uma calculadora simples. O usuÃ¡rio deve inserir dois nÃºmeros e uma operaÃ§Ã£o (adiÃ§Ã£o, subtraÃ§Ã£o, multiplicaÃ§Ã£o ou divisÃ£o). Use o switch para realizar a operaÃ§Ã£o correta e exibir o resultado.

3. Verificar Maior de TrÃªs NÃºmeros
Escreva um programa que receba trÃªs nÃºmeros inteiros e use if-else para determinar e exibir qual deles Ã© o maior.

4. Imprimir NÃºmeros de 1 a 100 (Com for)
Crie um programa que imprima todos os nÃºmeros de 1 a 100 usando a estrutura for.

5. Soma de NÃºmeros Pares (Com while)
Escreva um programa que calcule e exiba a soma de todos os nÃºmeros pares de 1 a 100. Use a estrutura while para realizar a soma.

6. NÃºmero Fatorial (Com do-while)
Escreva um programa que peÃ§a ao usuÃ¡rio um nÃºmero inteiro positivo e calcule o fatorial desse nÃºmero usando a estrutura do-while. O fatorial de um nÃºmero n Ã© a multiplicaÃ§Ã£o de todos os nÃºmeros de 1 atÃ© ??.

7. Menu de OpÃ§Ãµes (Com switch)
Crie um programa que exiba um menu com as seguintes opÃ§Ãµes:

Verificar se um nÃºmero Ã© positivo ou negativo.
Verificar se um nÃºmero Ã© par ou Ã­mpar.
Sair do programa. O programa deve usar switch para escolher a opÃ§Ã£o e realizar a aÃ§Ã£o correspondente.

8. CÃ¡lculo de MÃ©dia AritmÃ©tica
Escreva um programa que receba quatro notas de um aluno e calcule a mÃ©dia aritmÃ©tica. O programa deve usar if-else para verificar se a mÃ©dia Ã© maior ou igual a 7.0 e exibir se o aluno estÃ¡ aprovado ou reprovado.

9. Tabuada de um NÃºmero (Com for)
Escreva um programa que peÃ§a ao usuÃ¡rio um nÃºmero inteiro e exiba a tabuada desse nÃºmero de 1 a 10, usando a estrutura for.

10. Soma de NÃºmeros atÃ© Zero (Com do-while)
Crie um programa que receba nÃºmeros inteiros do usuÃ¡rio e vÃ¡ somando esses nÃºmeros. O programa deve parar de pedir nÃºmeros e exibir a soma total quando o usuÃ¡rio inserir o nÃºmero 0. Use a estrutura do-while para realizar essa tarefa.*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    //Variaveis usado no primeiro programa
    int operacao;
    int n1exe1;
    //Variaveis usado no segundo programa
    float n1exe2,n2exe2;
    char opexe2;
    //Variaveis usada no terceiro programa
    int n1,n2,n3;

    //Variaveis usada no quinto programa
    int somaexe5 =0;
    int paresexe5 = 0;

    //Variaveis usada no sexto programa
    int fatoexe6, numexe6;
        fatoexe6 = 1;

    //Variaveis usada no setimo programa
     int opcaoexe7,numeroexe7;
     //Variaveis usada no oitavo programa
     float notaexe8,mediaexe8=0;

     //Variaveis usada no novo programa
      float numeroexe09, tabuadaexe09;

    //Variaveis usada no decimo programa
    int numeroexe10;
    int somadorexe10 = 0;

    int x = 0;
    while (x == 0)//estrutura de repetiÃ§Ã£o para nÃ£o finalizar o programa no fim de cada uso.
    {

    
    printf("\nQual questão deseja ver ? 1 a 10 (Digite 0 para finalizar o programa): ");//Pergunta ao usuario qual questÃ£o ele deseja acessar
    scanf("%i",&operacao);
    switch (operacao){
    case 1:
        
        printf("Digite um número verificarei se é ímpar ou par: ");
        scanf("%i",&n1exe1);
        getchar();
        if(n1exe1 % 2 == 0){
            printf("\nO número %i é par.",n1exe1);
        }else{
            printf("\nO número %i é í­mpar.",n1exe1);
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
        printf("A multiplicaão entre %.0f e %.0f equivale a: %.2f",n1exe2,n1exe2,n1exe2*n2exe2);
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
    if(n1 > n2 && n1 > n3){
        printf("O maior número é %i",n1);
    }else if(n2 > n1 && n2 > n3){
        printf("O maior número é %i",n2);
    }else if(n3 > n1 && n3 > n2){
        printf("O maior número é %i",n3);
    }else if(n1 == n2 || n1 == n3 || n2 == n3){
        printf("2 números são iguais");
    }else {
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
            printf("Operação invalida.");
            break;
            }
        } while (opcaoexe7 != 3);




    break;

    case 8:
        for (int i = 1; i <= 4; i++){
            printf("Digite sua %iº nota: ",i);
            scanf("%f",&notaexe8);
            fflush(stdin);
            mediaexe8 = mediaexe8 + notaexe8;
        }
        mediaexe8 = mediaexe8 /4;
        if (mediaexe8 >= 7){
            printf("O aluno foi aprovado. Com média %.2f",mediaexe8);
        }else{
            printf("O aluno foi reprovado. Com média %.2f",mediaexe8);
        }

    break;

    case 9:
        printf("Digite um número: ");
        scanf("%f",&numeroexe09);
        getchar();
        printf("Tabuada de soma\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i + %0.f = %0.f\n",i,numeroexe09,numeroexe09+i);
        }
        printf("Tabuada de subtração\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i - %0.f = %0.f\n",i,numeroexe09,numeroexe09-i);
        }
        printf("Tabuada de mult\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i x %0.f = %0.f\n",i,numeroexe09,numeroexe09*i);
        }
        printf("Tabuada de div\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i / %0.f = %2.f\n",i,numeroexe09,numeroexe09/i);
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
   
    Sleep(500);//Comando para melhor interaÃ§Ã£o do usÃºario, da uma pausa em milisegundos.
    printf("Finalizando programa...");


return 0;


}
