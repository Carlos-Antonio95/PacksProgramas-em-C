#include <stdio.h>
#include <locale.h>
#include <windows.h>

//função cadastro
int cadastro(){
    int produtoCad;
    printf("Quantas unidades deseja cadastrar?: ");
    scanf("%d",&produtoCad);

    return produtoCad;
}
//função vendas 
int vendas(){
    int produtoVend;
    printf("Quantas unidades deseja vender?: ");
    scanf("%d",&produtoVend);

    return produtoVend;
}
//procedimento para saber quantidade em estoque
void estoque(int vassoura, int baldes){
    printf("Estoque:\n");
    printf("Vassouras em estoque: %d\n",vassoura);
    printf("Baldes em estoque: %d\n",baldes);
    Sleep(3000); 
    system("pause");
}
void info(int infoVassoura, int infoBaldes){
    printf("Total de vendas feitas do dia:\n");
    printf("Vassouras vendidas: %d\n",infoVassoura);
    printf("Baldes vendidos: %d\n",infoBaldes);
    system("pause");

}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int opc,vendasVassoura,vendaBaldes,vassoura = 0, baldes = 0,opc2,opc1,infoVassoura = 0, infoBaldes = 0;
    do{
        system("cls");
        printf("Menu:\n");
        printf("[1] - Vender produtos\n");
        printf("[2] - Cadastrar produtos:\n");
        printf("[3] - Conferir estoque:\n");
        printf("[4] - Sair\n");
        printf("Sua escolha: ");
        scanf("%d",&opc);
        switch (opc){
        case 1:
            system("cls");
            printf("Qual produto deseja vender?: \n");
            printf("[1] - Vassoura\n[2] - Balde\nSua opção: ");
            scanf("%d",&opc2);
            if(opc2 == 1){
                vendasVassoura = vendas();
                vassoura -= vendasVassoura;
                infoVassoura += vendasVassoura;
                vendasVassoura = 0;// a variavel volta a 0 para não ter valor na memoria quando for realziar otura venda de vassoura
                printf("Venda realizado com sucesso\n");
                Sleep(1000);


            }else if(opc2 == 2){
                vendaBaldes = vendas();
                baldes -= vendaBaldes;
                infoBaldes += vendaBaldes;
                vendaBaldes = 0;// a variavel volta a 0 para não ter valor na memoria quando for realziar otura venda de balses
                printf("Venda realizado com sucesso\n");
                Sleep(1000);

            }else{
                printf("Opção invalida!\n");
            }


            break;
        case 2:
            system("cls");
            printf("Qual produto deseja cadastrar?: \n");
            printf("[1] - Vassoura\n[2] - Balde\nSua opção: ");
            scanf("%d",&opc1);
            if(opc1 == 1){
                vassoura += cadastro();
                printf("Produto cadastrado.\n");
                Sleep(1000);

            }else if(opc1 == 2){
                baldes += cadastro();
                printf("Produto cadastrado.\n");
                Sleep(1000);
            }else{
                printf("Opção invalida.\n");
            }
            break;

        case 3:
            system("cls");
            estoque(vassoura, baldes);
            system("pause");
        break;

        case 4:
            system("cls");
            printf("Saindo do programa...\n");
            Sleep(1000);
            printf("Porgrama encerrado\n");
            Sleep(800);
            printf("Imprindo inforamações do dia\n");
            printf("--------------------------------------\n");
            info(infoVassoura,infoBaldes);
            Sleep(1000);
            break;
        
        default:
            printf("Opção invalida\n");
            break;
        }





    }while(opc != 4);







    return 0;
}