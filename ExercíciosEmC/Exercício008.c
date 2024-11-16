// Exercício 7 (Do-While): Desenvolva um programa com um menu interativo, na opção 1, deverá fazer uma calculadora, na opção 2 , solicitar um número do usuário e fazer sua tabuada, na opção 3, calcular sua média, na opção 4, mostrar se o número informado é par ou impar, na opção 5, finalizar o programa.

#include <stdio.h>
#include <locale.h>

float calculadora(int num1, int num2,char op){
    if(op == '+'){
        return num1 + num2;
    }else if(op == '-'){
        return num1 - num2;
    }else if(op == '/'){
        return num1 / num2;
    }else if (op == "*"){
        return num1 * num2;
    }
}

void Tabuada(float num){
        for(int i = 1; i <= 10; i++){
        printf("%0.f + %d = %0.f\n",num,i,i+num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f - %d = %0.f\n",num,i,i-num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f x %d = %0.f\n",num,i,i*num);
    }
    for(int i = 1; i <= 10; i++){
        printf("%0.f / %d = %2.f\n",num,i,num/i);
    }

    
}

float media(int num1, int num2){
    return (num1 + num2) / 2.0;

}

const char* parImpar(num){
    if (num % 2 == 0){
        return "Par\n";
    }else{
        return "Impar\n";
    }
}

void xau(){
    printf("Programa finalizado com sucesso!\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1,num2,op;
    do{

    }while(op != 5);





    return 0;
}