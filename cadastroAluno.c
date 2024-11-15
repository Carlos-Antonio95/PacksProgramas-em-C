#include <stdio.h>
#include <string.h>

int main() {
    char alunos[6][50]; // Array para armazenar os nomes de 6 alunos (máx 50 caracteres por nome)
    int consulta;

    // Cadastro dos alunos
    printf("Cadastro de alunos:\n");
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s",&alunos[i]);
    }

    // Consulta de um aluno
    do{
        printf("\nDigite 0 para sair.\n");
        printf("Qual aluno deseja consultar? (Digite um numero de 1 a 6): ");
        scanf("%d", &consulta);

        // Validação e exibição
        if (consulta < 0 || consulta > 6) {
            printf("Erro: Numero invalido! Escolha entre 1 e 6.\n");
        } else {
            // Laço para encontrar o aluno correspondente
            for (int i = 0; i < 6; i++) {
                if (i + 1 == consulta) {
                    printf("Aluno %d: %s\n", consulta, alunos[i]);
                    break;
                }
            }
        }
    }while(consulta != 0);
    return 0;
}
