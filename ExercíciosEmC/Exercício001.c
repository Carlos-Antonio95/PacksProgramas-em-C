// Exércicio 1 (if-else): Desenvolva um programa que solicita um número do usuario, e informe se ele é impar ou par.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

const char* imparPar(int numero){
    if(numero % 2 == 0){
        return "Par";
    }else{
        return "Impar";
    }
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    printf("Digite um número direi se é par ou ímpar: ");
    scanf("%d",&n1);
    printf("O número %d é : %s",n1,imparPar(n1));


    return 0;
}