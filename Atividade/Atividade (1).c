#include <stdio.h>

int main() {
    int quantidadeAlunos, i;
    float nota1, nota2, nota3, media;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &quantidadeAlunos);

    for (i = 1; i <= quantidadeAlunos; i++) {
        printf("\nAluno %d:\n", i);

        printf("Digite a nota do 1º semestre: ");
        scanf("%f", &nota1);

        printf("Digite a nota do 2º semestre: ");
        scanf("%f", &nota2);

        printf("Digite a nota do 3º semestre: ");
        scanf("%f", &nota3);

        // Calcula a média
        media = (nota1 + nota2 + nota3) / 3;

        // Verifica se o aluno está aprovado
        if (media >= 7.0) {
            printf("Média final: %.2f - Aprovado\n", media);
        } else {
            printf("Média final: %.2f - Reprovado\n", media);
        }
    }

    return 0;
}
