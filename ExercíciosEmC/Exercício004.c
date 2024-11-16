#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Exéricio 4 (for): Desenvolva um programa que leia um número do usuário e mostre sua tabuada.

void Tabuada(float num){
    for(int i = 1; i <= 10; i++){
        printf("%0.f + %d = %0.f\n",num,i,i+num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f - %d = %0.f\n",num,i,i-num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f x %d = %0.f\n",num,i,i*num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f / %d = %2.f\n",num,i,num/i);
    }


}


int main(){
    setlocale(LC_ALL,"Portuese");
    float num;
    printf("Digite um número: ");
    scanf("%f",&num);
    Tabuada(num);


    return 0;
}
