#include <stdio.h>

int main() {
    int ano_atual, ano_nascimento, mes, dia, idade;

    printf("Coloque sua data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano_nascimento);

    printf("Coloque o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano_nascimento);
    printf("Idade: %d\n", idade);

    return 0;
}
