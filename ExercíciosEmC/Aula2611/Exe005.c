#include <stdio.h>

int main(){
    int num = 1, soma = 0;
    while (num != 0){
        printf("Digite um número (0 ira parar\n): ");
        scanf("%d",&num);
        soma = num + soma;
    }
    
    printf("A soma de todos números digitados é: %d\n",soma);
    

    return 0;
}