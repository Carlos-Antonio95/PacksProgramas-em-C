//Exércicio 3 (for):  Desenvolva um programa que faça uma contagem regressiva de 10 a 0, e ao final exiba uma mensagem de "Boas festas".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void Bfestas(){
    printf("\nBoas Festas!\n");
}

int main(){
    for(int i = 10; i != 0; i -- ){
        printf("%d ",i);
        Sleep(200);
    }
    Bfestas();
}