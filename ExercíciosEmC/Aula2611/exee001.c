#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número direi se é par ou impar:");
    scanf("%d",&num);
    if(num %2 == 0){
        printf("O número %d é par\n",num);
    }else{
        printf("O número %d é impar\n",num);
    }
    return 0;
}