#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Exerc�cio 3: An�lise de Temperaturas
Objetivo: Criar um programa que leia as temperaturas di�rias de uma semana e calcule a temperatura m�dia, a menor e a maior temperatura registrada. O programa deve:

Solicitar as temperaturas para 7 dias da semana.
Calcular a temperatura m�dia da semana.
Identificar e exibir a menor e a maior temperatura registrada.
Dicas:

Use um array para armazenar as temperaturas dos 7 dias.
Percorra o array para calcular a m�dia e identificar a menor e a maior temperatura.*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    float temperaturas7d[7];
    float soma =0, media,maior,menor;
        for (int i = 0; i < 7; i++){
            printf("Digite a temperatura do %d� dia: ",i+1);
            scanf("%f",&temperaturas7d[i]);
            if(temperaturas7d[i] >= -100 && temperaturas7d[i] <= 60){
                 soma += temperaturas7d[i];
            }else{
                i--;//decrementa o for para voltar a pocis�o anterior do array caso a entrada seja invalida.
                printf("Digite uma temperatura valida entre: -100 e 60 �c\n");
            }
           
            //estrutura para saber o menor e o maior 
            if(i == 0){
                menor = temperaturas7d[i];
                maior = temperaturas7d[i];
            }else{
                if(temperaturas7d[i] < menor){
                    menor = temperaturas7d[i];
                }
                if(temperaturas7d[i] > maior){
                    maior = temperaturas7d[i];
                }
            }



        }
    media = soma / 7; // media dos 7 dias digitados

    printf("M�dia dos 7 dias de temperaturas: %.2f\n",media);
    printf("Menor temperatura dos 7 dias: %.2f\n",menor);
    printf("Maior temperatura dos 7 dias: %.2f\n",maior);
    
    return 0;
}