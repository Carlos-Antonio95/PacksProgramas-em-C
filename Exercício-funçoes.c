#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>

float calculardesconto(float vp, float vd){
    return vp - (vp*vd);
}

float calcularimposto(float vp, float vd){
    return vp*vd;
}

float valorproduto(float vp, float qp){
    return vp * qp;
}

float potencia ( float vd, float vi){
    return pow(vi,vd);
}

float maiormenor(float vd, float vi){
    if (vd > vi){
        return vd;
    }else{
        return vi;
    }
}

 const char* data (int d, int m, int a){
    if(d == 9 && m == 11 && a == 2024){
        return "True";
    }else{
        return "False";
    }
}

void boas(){
    printf("Boas vindas!\n");
}

void desconto(float v, float d){
    float vd;
    vd = v - ( v * d);
    printf("O valor com desconto é : %.2f\n",vd);
}

void impostoo (float v, float d){
    float vd;
    vd = v * d;
    printf("O valor do total com imposto é: %.2f\n",vd);
}

void valores(float p, float d){
    printf("Valor do produto: %.2f\n",p);
    printf("Valor da porcentagem: %.2f\n",d);
    printf("Valor do desconto: %.2f\n",p*d);
    printf("Valor final: %.2f\n",p -(p*d));

}

void menormaior (float vd, float vi){
    if (vd > vi){
        printf("O maior é: %.2f\n",vd);
    }else{
        printf("O maior é: %.2f\n",vi);
    }
}

void xau(){
    printf("Finalizando o programa...\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float preco,desc,total1,imposto,total2,qp,total3,total4,total5;
    int d,m,a;
    const char* total6;

    boas();
    printf("Digite o preço: ");
    scanf("%f",&preco);
    getchar();
    printf("Digite o descoto: ");
    scanf("%f",&desc);
    total1 = calculardesconto(preco,desc);
    printf("O preço com desconto é: %.2f\n",total1);
    printf("Digite o preço do produto: ");
    scanf("%f",&preco);
    getchar();
    printf("Digite a taxa de imposto: ");
    scanf("%f",&imposto);
    total2 = calcularimposto(preco,imposto);
    printf("O preço com imposto é: %.2f\n",total2);
    printf("Digite a quantidade de protudo: ");
    scanf("%f",&qp);
    total3 = valorproduto(preco, qp);
    printf("O valor total de protudos é: %.2f\n",total3);
    total4 = potencia(desc, imposto);
    printf("A potencia é : %.2f\n",total4);
    total5 = maiormenor(desc,imposto);
    printf("O maior é : %.2f\n",total5);
    printf("Digite o dia mes e ano:\n");
    scanf("%d%d%d",&d,&m,&a);
    total6 = data(d,m,a);
    printf("%s\n",total6);
    desconto(preco,desc);
    impostoo(preco,imposto);
    valores(preco,desc);
    menormaior(desc,imposto);
    xau();




    return 0;
}