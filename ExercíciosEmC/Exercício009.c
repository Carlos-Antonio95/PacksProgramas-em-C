/*Escreva um programa em linguagem C que solicite ao usu�rio a entrada de 5 n�meros inteiros e armazene-os em um array. O programa deve:

Determinar o maior n�mero.
Determinar o menor n�mero.
Calcular a m�dia dos n�meros.
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
        printf("Digite o %d� n�mero: ",i+1);
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
        printf("%d� digitado: %d \n",i+1,numeros[i]);
    }
    
    printf("O maior n�mero �: %d\n",maior);
    printf("O menor n�mero � : %d\n",menor);
    printf("A m�dia dos n�meros �: %.2f\n",media);

    return 0;
}