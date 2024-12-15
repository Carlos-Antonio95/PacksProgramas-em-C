#include <stdio.h>

    int main(){
    int op,soma,num1,num2;
    do{
        printf("[1] SOMA\n");
        printf("[2] MÉDIA\n");
        printf("[3] SAIR\n");
        printf("Sua opção: ");
        scanf("%d",&op);
        switch (op){
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%d",&num1);
                printf("Digite o segundo número: ");
                scanf("%d",&num2);
                //soma = num1 + num2;
                printf("A soma de %d + %d é : %d\n",num1,num2,num1+num2);
            break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%d",&num1);
                printf("Digite o segundo número: ");
                scanf("%d",&num2);
                printf("A média é: %.2f\n",(num1+num2) / 2.0);
            break;
            case 3:
                printf("Sair"); 
            break;
        
            default:
                printf("Opção invalida!Digte 1,2 ou 3(Sair)\n");
            break;
        }
    }while(op != 3);
    
    return 0;
}