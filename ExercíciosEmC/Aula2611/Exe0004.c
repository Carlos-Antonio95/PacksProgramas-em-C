#include <stdio.h>


int main(){
    int num;
    printf("Digite um número irei fazer a tabuada dele: ");
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++){
        printf("%d + %d = %d\n",num,i,num+i);

    }
    // printf("\n===========================\n\n");
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",num,i,num*i);

    }

    return 0;
}