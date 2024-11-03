#include <stdio.h>
#include <locale.h>
/*Escreva um programa que receba notas de alunos, onde o usu�rio vai inserindo sucessivamente as notas at� que um valor negativo seja digitado.
O programa deve calcular e exibir a m�dia das notas positivas.
Adicione uma fun��o para verificar se a nota est� dentro do intervalo permitido (exemplo: 0 a 10) antes de somar.*/

int notaa(float notavilda){
    return(notavilda >= 0 && notavilda <=10 );
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota,media,soma = 0;
    int contador = 0;
    do{
    printf("Digite sua nota: %d� :",contador+1);
    scanf("%f",&nota);
    if(notaa(nota)){
        soma = nota + soma;
        contador ++;
    }else{
        printf("Digite uma nota entre 0 e 10.\n");
    }


    
    }while(nota >= 0 );
    media = soma  / contador;
    printf("\nA sua m�dia �: %.2f",media);


    return 0;
}