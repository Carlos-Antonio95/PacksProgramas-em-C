/*Escreva um programa em linguagem C que solicite ao usuário a entrada de 5 números inteiros e armazene-os em um array. O programa deve:

Determinar o maior número.
Determinar o menor número.
Calcular a média dos números.
Exiba os resultados na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numeros[5];
    int maior,menor, soma = 0;
    float media;

    for(int i = 0; i < 5; i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&numeros[i]);
        soma = soma + numeros[i];
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
        }
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    media = soma / 5;
    for (int i = 0; i < 5; i++){
        printf("%dº digitado: %d \n",i+1,numeros[i]);
    }
    
    printf("O maior número é: %d\n",maior);
    printf("O menor número é : %d\n",menor);
    printf("A média dos números é: %.2f\n",media);

    return 0;
}