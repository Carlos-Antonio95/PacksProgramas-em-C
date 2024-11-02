#include <stdio.h>
#include <locale.h>

float operMatematicas(float num1, float num2) {
    float soma, sub, mult, div, total;
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    total = soma + sub + mult + div;
    return total;
}

int verValor(int num) {
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
}

void converteTempo(int segundosTotais) {
    int horas, minutos, segundos;
    horas = segundosTotais / 3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = (segundosTotais % 3600) % 60;
    printf("O tempo equivale a: %d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
}

void mnotas(float n1,float n2, float n3){
    float maior = n1,menor = n1;
    if (n2 > maior){
        maior = n2;
    }
    if (n3 > maior){
        maior = n3;
    }
    if (n2 < menor){
        menor = n2;
    }
    if ( n3 < menor){
        menor = n3;
    }

    float somanotas = n1 + n2 + n3;
    float media3notas = somanotas /3;
    float soma2maiores = somanotas - menor;
    float media2maiores = soma2maiores / 2;

    printf("Média 3 notas: %.2f\n",media3notas);
    printf("Média 2 maior: %.2f\n",media2maiores);
    printf("Nota alta: %.2f\n",maior);
    printf("Nota baixa: %.2f\n",menor);


}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op,num,n,resultadoc3,resultadoc2;
    float n1,n2,resultadoc1,a,b,c,d,e,f;

    do {
        printf("1 = Operações\n");
        printf("2 = Verificar valor\n");
        printf("3 = Tempo\n");
        printf("4 = Notas\n");
        printf("0 = Sair\n");
        printf("Opção: ");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Digite o 1º valor: ");
                scanf("%f",&n1);
                do{
                    printf("Digite o 2º valor: ");
                    scanf("%f",&n2);
                }while(n2 <= 0);
                resultadoc1 = operMatematicas(n1,n2);
                printf("Resultado: %.2f\n",resultadoc1);
                break;
            
            case 2:
                printf("Digite um número: ");
                scanf("%d",&num);
                getchar();
                resultadoc2 = verValor(num);
                printf("Resultado: %d\n",resultadoc2);
                break;
            case 3:
                printf("Digite o tempo em segundos: ");
                scanf("%d",&n);
                converteTempo(n);
                break;
            case 4:
                do{
                    printf("Digite 1º nota: ");
                    scanf("%f",&d);
                    printf("Digite 2º nota: ");
                    scanf("%f",&e);
                    printf("Digite 3º nota: ");
                    scanf("%f",&f);
                }while((d < 0 || d > 10) || (e < 0 || e > 10) || ( f < 0 || f > 10));
                mnotas(d,e,f);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Erro\n");
                break;
        }
    }while(op != 0);
    return 0;
}