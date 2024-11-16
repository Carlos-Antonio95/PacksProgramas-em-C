// Exéricio 5 (while): Desenvolva um programa que solicite um número inteiro do usuário e ao ele digitar 0, o programa deve finalizar e mostrar a soma de todos os números digitados.
#include <stdio.h>
#include <locale.h>
void somaTotal(int soma){
    printf("A soma de todos o snúmeros digitados é: %d",soma);

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 1, soma = 0;
    while (n != 0){
        printf("Digite um número(0 PARA SAIR): ");
        scanf("%d",&n);
        soma = soma + n;

    }
    somaTotal(soma);


    return 0;
}