// Ex�rcicio 1 (if-else): Desenvolva um programa que solicita um n�mero do usuario, e informe se ele � impar ou par.
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
    printf("Digite um n�mero direi se � par ou �mpar: ");
    scanf("%d",&n1);
    printf("O n�mero %d � : %s",n1,imparPar(n1));


    return 0;
}