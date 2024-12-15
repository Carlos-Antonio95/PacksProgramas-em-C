#include <stdio.h>
#include <math.h>

int potencia(int b, int e){
    return pow(b,e);
}

int fatorial(int f){
    int b;
    b = f;
    for(int i = 1; i < f; i++){
        b = b*i;
    }
    return b;
}

void temp(float cf){
    int op;
    float c,f;
    printf("Converter temperatura: 1 = celses 2 = fahreenhent\n");
    scanf("%d",&op);
    if (op == 1){
        c = ( cf -32 ) * 5/9;
        printf("Temperatura em %.2f\n",c);
    }else if(op ==2 ){
        f = cf * 9/5 +32;
        printf("Temperatura em %.2f\n",f);
    }else{
        printf("Opção invalida\n");
    }
}

void kmm (float n1){
    float r;
    int op;
    printf("Converter: 1 = km 2 = milhas\n");
    scanf("%d",&op);
    if(op == 1){
        r = n1 * 1.621371;
        printf("%.2f km\n",r);
    }else if(op == 2){
        r = n1 / 0.621371;
        printf("%.2f Milhas\n");
    }else{
        printf("Opção invalida\n");
    }
}


int main(){

    int op,n1,n2,fat;
    float t,d;
    do{
        printf("1 = Calcular potencia\n");
    }while(op !=5);








}