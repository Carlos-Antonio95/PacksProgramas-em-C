/*Exercício 2: Frequência de Números em um Array
Crie um programa que receba uma lista de números e conte a frequência de cada número. O programa deve:

Receber a quantidade de números a serem lidos.
Receber os números e armazená-los em um array.
Exibir a frequência de cada número.
Dicas:

Use dois arrays: um para armazenar os números e outro para armazenar as frequências.
Para simplificar, limite os números entre 0 e 10, por exemplo.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int QuantNum;
    do{
        printf("Digite a quantidade de números que serão lidos: ");
        scanf("%d",&QuantNum);
        if(QuantNum <= 0){
            printf("Valor invalido! Quantidade de números tem que ser superior a 0.\n");
        }
    }while(QuantNum <= 0);//garante que a quantidade de números a serem digitados seja superior a 0
    int numerosLidos[QuantNum];
    int FrequenciaNum[11] = {0};

    for(int i = 0; i < QuantNum;  i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&numerosLidos[i]);

        if (numerosLidos[i] >= 0 && numerosLidos[i] <= 10){
            FrequenciaNum[numerosLidos[i]]++;
        }else{
            i--;//decrementa o valor de i para retorna a leitura anterior
            printf("Valor invalido! Digite um número valido entre 0 e 10.\n");
        }

    }
    printf("Frequencia dos números:\n");
    for(int i = 0; i <= 10; i++){
        if (FrequenciaNum[i] > 0){
            printf("O número %d aparece: %d vezes.\n",i,FrequenciaNum[i]);
        }
    }





    return 0;
}