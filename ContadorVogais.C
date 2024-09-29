#include <stdio.h>
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char letras[100];
    int vogais =0;
    printf("Digite uma frase, irei contar apenas as vogais: ");
    fgets(letras,100,stdin);
   
    for (int i = 0; letras[i] != '\0'; i++){
        if (letras[i] =='a' || letras[i] =='e' || letras[i] =='i' || letras[i] =='o'
            || letras[i] =='u' || letras[i] =='A' || letras[i] =='E' || letras[i] =='I' || letras[i] =='O'
            || letras[i] =='U'){
            vogais ++;
        }
        
    }
 
    printf("O total de vogais é: %i",vogais);
    return 0;

}