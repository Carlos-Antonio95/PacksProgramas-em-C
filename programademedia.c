//Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota,media;
    for (int  i = 1; i < 5; i++){
        printf("Digite sua %iº nota: ",i);
        scanf("%f",&nota);
        getchar();
        media = media + nota;
    }
    printf("Sua média bimestral é : %.2f",media / 4);

    return 0;
}