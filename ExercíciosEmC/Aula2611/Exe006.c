#include <stdio.h>

    int main(){
    int op,soma,num1,num2;
    do{
        printf("[1] SOMA\n");
        printf("[2] M�DIA\n");
        printf("[3] SAIR\n");
        printf("Sua op��o: ");
        scanf("%d",&op);
        switch (op){
            case 1:
                printf("Digite o primeiro n�mero: ");
                scanf("%d",&num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d",&num2);
                //soma = num1 + num2;
                printf("A soma de %d + %d � : %d\n",num1,num2,num1+num2);
            break;
            case 2:
                printf("Digite o primeiro n�mero: ");
                scanf("%d",&num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d",&num2);
                printf("A m�dia �: %.2f\n",(num1+num2) / 2.0);
            break;
            case 3:
                printf("Sair"); 
            break;
        
            default:
                printf("Op��o invalida!Digte 1,2 ou 3(Sair)\n");
            break;
        }
    }while(op != 3);
    
    return 0;
}