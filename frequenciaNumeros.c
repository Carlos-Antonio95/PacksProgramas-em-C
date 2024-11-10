/*Exerc�cio 2: Frequ�ncia de N�meros em um Array
Crie um programa que receba uma lista de n�meros e conte a frequ�ncia de cada n�mero. O programa deve:

Receber a quantidade de n�meros a serem lidos.
Receber os n�meros e armazen�-los em um array.
Exibir a frequ�ncia de cada n�mero.
Dicas:

Use dois arrays: um para armazenar os n�meros e outro para armazenar as frequ�ncias.
Para simplificar, limite os n�meros entre 0 e 10, por exemplo.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int QuantNum;
    do{
        printf("Digite a quantidade de n�meros que ser�o lidos: ");
        scanf("%d",&QuantNum);
        if(QuantNum <= 0){
            printf("Valor invalido! Quantidade de n�meros tem que ser superior a 0.\n");
        }
    }while(QuantNum <= 0);//garante que a quantidade de n�meros a serem digitados seja superior a 0
    int numerosLidos[QuantNum];
    int FrequenciaNum[11] = {0};

    for(int i = 0; i < QuantNum;  i++){
        printf("Digite o %d� n�mero: ",i+1);
        scanf("%d",&numerosLidos[i]);

        if (numerosLidos[i] >= 0 && numerosLidos[i] <= 10){
            FrequenciaNum[numerosLidos[i]]++;
        }else{
            i--;//decrementa o valor de i para retorna a leitura anterior
            printf("Valor invalido! Digite um n�mero valido entre 0 e 10.\n");
        }

    }
    printf("Frequencia dos n�meros:\n");
    for(int i = 0; i <= 10; i++){
        if (FrequenciaNum[i] > 0){
            printf("O n�mero %d aparece: %d vezes.\n",i,FrequenciaNum[i]);
        }
    }





    return 0;
}