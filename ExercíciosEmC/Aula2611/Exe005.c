#include <stdio.h>

int main(){
    int num = 1, soma = 0;
    while (num != 0){
        printf("Digite um n�mero (0 ira parar\n): ");
        scanf("%d",&num);
        soma = num + soma;
    }
    
    printf("A soma de todos n�meros digitados �: %d\n",soma);
    

    return 0;
}