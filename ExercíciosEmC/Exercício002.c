/*Ex�rcicio 2 (if-else): Desenvolva um programa que solicite 3 notas de um aluno, se a nota for menor ou igual a 3, exiba aluno REPROVADO,
se a nota for maior que 3 e menor ou igual a 6 , exiba aluno em RECUPERA��O, e maior que 7, exiba aluno APROVADO*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
const char* notas3 (float nt1){
    if(nt1 <=3){
        return "REPROVADO\n";
    }else if(nt1 >3 && nt1 <= 6){
        return "RECUPERA��O\n";
    }else{
        return "APROVADO\n";
    }
}



int main(){
    float n1;
    setlocale(LC_ALL,"Portuguese");
    do{
        printf("Digite 1� nota: ");
        scanf("%f",&n1);
        getchar();
        if(n1 < 0 || n1 > 10){
            printf("Digite uma nota valida entre 0 e 10.\n");
        }else{
            printf("%s",notas3(n1));
        }
    }while(n1 < 0 || n1 >10);
    do{
        printf("Digite 2� nota: ");
        scanf("%f",&n1);
        if(n1 < 0 || n1 > 10){
            printf("Digite uma nota valida entre 0 e 10.\n");
        }else{
            printf("%s",notas3(n1));
        }
    }while(n1 < 0 || n1 > 10);  
    do{
        printf("Digite 3� nota: ");
        scanf("%f",&n1);
        if(n1 < 0 || n1 > 10){
            printf("Digite uma nota valida entre 0 e 10.\n");
        }else{
            printf("%s",notas3(n1));
        }
    }while(n1 < 0 || n1 >10);    





    return 0;
}