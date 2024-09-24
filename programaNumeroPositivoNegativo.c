//Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
#include <stdio.h>
#include <locale.h>
int main (){
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número, direi se ele é positivo ou negativo: ");
    scanf("%i",&num);
    getchar();
    if(num < 0 ){
        printf("O número %i digitado é negativo.",num);
    }else if(num > 0 ){
        printf("O número %i digitado é positivo",num);
    }else{
        printf("O número %i digitado é neutro",num);
    }

    return 0;
}