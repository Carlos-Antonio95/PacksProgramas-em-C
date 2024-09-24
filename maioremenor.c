//Programa que peça dois números e imprima o maior deles.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    printf("Digite o primeiro número: ");
    scanf("%i",&n1);
    getchar();
    printf("Digite o segundo número: ");
    scanf("%i",&n2);
    getchar();
    if(n1 > n2){
        printf("O maior número é: %i",n1);

    }else if(n2 > n1){
        printf("O maior número é: %i",n2);
    }else{
        printf("Os números digitados são iguais.");
    }

    return 0;
}