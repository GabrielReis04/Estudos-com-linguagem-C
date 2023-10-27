#include <stdio.h>

int main() {
    int dias;
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    int idade;

    printf("Coloque a data atual (Dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Coloque a sua data de nascimento (Dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Calcular idade
    idade = ano1 - ano2;
    

    dias = idade * 360 + (mes1 - mes2) * 30 + (dia1 - dia2);

    printf("Você já viveu aproximadamente %d dias.\n", dias);

    return 0;
}
