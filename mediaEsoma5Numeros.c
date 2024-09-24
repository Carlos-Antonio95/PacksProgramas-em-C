// programa que leia 5 números e informe a soma e a média dos números.
#include <stdio.h>
#include <locale.h>
int main(){
    float soma,media,num;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 01; i < 6; i++){
        printf("Digite o %iº número: ",i);
        scanf("%f",&num);
        soma += num;
    }
    media = soma / 5;
    printf("A soma de todos os valores digitados é: %.2f\n",soma);
    printf("A média dos valores digitados é: %.2f",media);
    

    return 0;
}