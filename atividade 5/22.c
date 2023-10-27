#include <stdio.h>

int main() {
int alunos, grupos, restantes, grupos_formados, quantidade_porgrupo;

printf("Coloque a quantidade de alunos");
scanf("%d", &alunos);

printf("Quantidade de alunos por grupo: ");
scanf("%d", &quantidade_porgrupo);

//calculos
grupos_formados = alunos / quantidade_porgrupo;
restantes = alunos % quantidade_porgrupo;

printf("Quantidade de grupos formados: %d\n", grupos_formados);
printf("Alunos restantes: %d\n", restantes);
    return 0;
}
