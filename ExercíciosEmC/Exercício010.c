/*Crie um programa em C que permita ao usu�rio cadastrar os nomes de 6 alunos. Ap�s o cadastro, o programa deve permitir que o usu�rio consulte o nome de um aluno fornecendo o n�mero correspondente (de 1 a 6). Utilize um la�o for para percorrer o vetor e encontrar o nome desejado. Caso o n�mero informado esteja fora do intervalo v�lido, exiba uma mensagem de erro. O Programa deve ser encerrado quando o usu�rio digitar 0 na consulta de alunos
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
        printf("Digite o nome do %d� aluno: ", i + 1);
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
            printf("N�mero do aluno inv�lido. Tente novamente.\n");
        } else {
            for(int i = 0; i < 6; i++){
                if( i == consulta - 1){
                    printf("Aluno %d�, nome: %s\n", consulta, alunos[i]);
                }
            }
        }

    } while (consulta != 0);

    return 0;
}
