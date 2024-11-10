#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Exerc�cio 1: C�lculo da M�dia de Notas
Crie um programa que receba as notas de uma turma de estudantes e calcule a m�dia das notas. O programa deve:

Receber a quantidade de estudantes da turma.
Receber as notas de cada estudante.
Exibir a m�dia das notas e a quantidade de notas acima da m�dia.
Dicas:

Use um array para armazenar as notas.
Ap�s calcular a m�dia, percorra o array para contar quantas notas est�o acima da m�dia.*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    int QuantEstudantes;
    float media,soma = 0,QuantMedia;

    do{
        printf("Digite a quantidade de alunos na turma: ");
        scanf("%d",&QuantEstudantes);
        if(QuantEstudantes <= 0){
            printf("A qantidade de estudantes tem que ser superior a 0.\n");
        }
    }while(QuantEstudantes <= 0 );
    getchar();
    float notas[QuantEstudantes];
    for(int i = 0; i < QuantEstudantes; i ++){
        do{
            printf("Digite a nota do %d� aluno: ",i+1);
            scanf("%f",&notas[i]);
            if(notas[i] < 0 || notas [i] > 10){
                printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
            }
        }while(notas[i] < 0 || notas[i] > 10);
        soma += notas[i];
    }
    media = soma / QuantEstudantes;
    printf("A m�dia das notas �: %.2f\n",media);

    float MediaNotas = 7;
    int acimaMedia = 0;

    for(int i = 0; i < QuantEstudantes; i ++){
        if(notas[i] >= MediaNotas){
            acimaMedia ++;
            printf("Nota do estudante: %d Com Nota %.2f\n",i+1,notas[i]);
        }
    }
    printf("Total de estudantes com nota acima da m�dia: %d",acimaMedia);






    return 0;
}