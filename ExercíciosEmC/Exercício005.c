// Ex�ricio 5 (while): Desenvolva um programa que solicite um n�mero inteiro do usu�rio e ao ele digitar 0, o programa deve finalizar e mostrar a soma de todos os n�meros digitados.
#include <stdio.h>
#include <locale.h>
void somaTotal(int soma){
    printf("A soma de todos o sn�meros digitados �: %d",soma);

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 1, soma = 0;
    while (n != 0){
        printf("Digite um n�mero(0 PARA SAIR): ");
        scanf("%d",&n);
        soma = soma + n;

    }
    somaTotal(soma);


    return 0;
}