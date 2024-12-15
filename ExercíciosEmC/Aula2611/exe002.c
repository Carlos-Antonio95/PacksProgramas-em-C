#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    printf("Digite as 3 notas:");
    scanf("%f%f%f",&n1,&n2,&n3);
    /*printf("Digite a segunda nota:");
    scanf("%f",&n2);
    printf("Digite a terceira nota:");
    scanf("%f",&n3);*/
    media = (n1 + n2 + n3) / 3;
    if(media <= 6){
        printf("Aluno esta em recuperação, com nota: %f",media);
    }else{
        printf("Aluno esta aprovado, com nota %f",media);
    }


    return 0;
}