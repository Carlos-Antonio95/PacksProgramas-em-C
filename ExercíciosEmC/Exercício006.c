// Ex�rcicio 6 (while): Desenvolva um programa que exiba n�meros de 1 at� 50, pulando de 2 em 2.
#include <stdio.h>
#include <locale.h>

int main(){
    int num = 1;
    while(num <=50){
        printf("%d ",num);
        num = num + 2; 
    }



    return 0;
}
