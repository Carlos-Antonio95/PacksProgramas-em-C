/*Crie um programa em C que permita ao usuário cadastrar os nomes de 6 alunos. Após o cadastro, o programa deve permitir que o usuário consulte o nome de um aluno fornecendo o número correspondente (de 1 a 6). Utilize um laço for para percorrer o vetor e encontrar o nome desejado. Caso o número informado esteja fora do intervalo válido, exiba uma mensagem de erro. O Programa deve ser encerrado quando o usuário digitar 0 na consulta de alunos
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char alunos[6][50]; // Array para armazenar os nomes dos alunos
    int consulta;

    // Cadastro dos alunos
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        fgets(alunos[i], sizeof(alunos[i]), stdin);
        alunos[i][strcspn(alunos[i], "\n")] = '\0'; // Remove o '\n'
    }

    // Consulta dos alunos
    do {
        printf("\nDigite 0 para sair\n");
        printf("Qual aluno deseja consultar? (1 a 6): ");
        scanf("%d", &consulta);

        if (consulta == 0) {
            printf("Programa encerrado.\n");
            break;
        } else if (consulta < 1 || consulta > 6) {
            printf("Número do aluno inválido. Tente novamente.\n");
        } else {
            for(int i = 0; i < 6; i++){
                if( i == consulta - 1){
                    printf("Aluno %dº, nome: %s\n", consulta, alunos[i]);
                }
            }
        }

    } while (consulta != 0);

    return 0;
}
