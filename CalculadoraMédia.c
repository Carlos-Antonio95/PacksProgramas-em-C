#include <stdio.h>
#include <locale.h>
/*Escreva um programa que receba notas de alunos, onde o usuário vai inserindo sucessivamente as notas até que um valor negativo seja digitado.
O programa deve calcular e exibir a média das notas positivas.
Adicione uma função para verificar se a nota está dentro do intervalo permitido (exemplo: 0 a 10) antes de somar.*/

int notaa(float notavilda){
    return(notavilda >= 0 && notavilda <=10 );
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota,media,soma = 0;
    int contador = 0;
    do{
    printf("Digite sua nota: %dº :",contador+1);
    scanf("%f",&nota);
    if(notaa(nota)){
        soma = nota + soma;
        contador ++;
    }else{
        printf("Digite uma nota entre 0 e 10.\n");
    }


    
    }while(nota >= 0 );
    media = soma  / contador;
    printf("\nA sua média é: %.2f",media);


    return 0;
}