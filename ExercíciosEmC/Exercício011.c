/*// Exerc�cio 11 (Programa): Desenvolva um programa de Supermercado, no menu deve ter 4 op��es, opc��o 1 - Vender produtos, opc��o 2 - Consultar estoque,
// Opc��o 3 - Cadastrar produtos, op��o 4 - Finalizar o programa, ao finalizar exibir uma mensagem exibindo o total de itens vendidos no dia
// OBS: No programa dever ser feitos 2 fun��es e  2 procedimentos, Fun��es para cadastar e venda de produtos, e Procedimentos para exibir estoque e informa�a� final
// O Supermecado deve ter 2 produtos a serem vendidos. (produtos a escolha do desenvolvedor, ex: geladeira e vassoura).*/

# include <stdio.h>
# include <locale.h>


int cadastrarVassoura(){
    int a;

    printf("Quantidade: ");
    scanf("%d", &a);
    return a;
}

int cadastrarPanela(){
    int a;

    printf("Quantidade: ");
    scanf("%d", &a);
    return a;
}


void consulta(int a, int b){
    printf("Produtos em Estoque\n");
    printf("Vassoura: %d\n", a);
    printf("Panela: %d\n", b);
}


void info(int a){
    printf("Informa��o Geral\n");
    printf("Foram realizados %d vendas hoje!" , a);
    
}


int main (){
    int vassoura = 0, panela = 0, total = 0, venda, opc, opc1, opc2;
    setlocale(LC_ALL, "Portuguese");

    do{
        printf("Menu: \n");
        printf("[1] - Cadastrar Produtos\n[2] - Consulta Estoque\n[3] - Vendas\n[4] - Sair\n");
        printf("Sua op��o: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                printf("Qual produto deseja cadastrar?\n");
                printf("[1] - Vassoura\n[2] -  Panela\n");
                printf("Op��o: ");
                scanf("%d", &opc1);
                if (opc1 == 1){
                    vassoura += cadastrarVassoura();
                }else if(opc1 == 2){
                    panela += cadastrarPanela();
                }
                break;
            case 2:
                consulta(vassoura, panela);
                break;
            case 3:
                printf("Qual produto deseja vender?\n");
                printf("[1] - Vassoura\n[2] -  Panela\n");
                printf("Op��o: ");
                scanf("%d", &opc2);
                if (opc2 == 1){
                    printf("Quantidade a ser vendida?: ");
                    scanf("%d", &venda);
                    vassoura -= venda;
                    total += venda;
                    venda = 0;
                }else if (opc2 == 2){
                    printf("Quantidade a ser vendida?: ");
                    scanf("%d", &venda);
                    panela -= venda;
                    total += venda;
                    venda = 0;
                }

            case 4:
                printf("Programa encerrado!\n");
                info(total);
                break;

            default:
                printf("Op��o invalida!\n");
                break;
        }
    }while (opc != 4);
    return 0;
}