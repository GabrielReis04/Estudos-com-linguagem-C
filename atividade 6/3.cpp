#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float areaParedes, qtdCaixas;

    // Leitura das dimensões da cozinha
    printf("Informe o comprimento da cozinha em metros: ");
    scanf("%f", &comprimento);

    printf("Informe a largura da cozinha em metros: ");
    scanf("%f", &largura);

    printf("Informe a altura da cozinha em metros: ");
    scanf("%f", &altura);

    // Cálculo da área das paredes (sem descontar portas e janelas)
    areaParedes = 2 * altura * (comprimento + largura);

    // Cálculo da quantidade de caixas de azulejos
    qtdCaixas = areaParedes / 1.5;

    // Exibição do resultado
    printf("Quantidade de caixas de azulejos necessárias: %.2f\n", qtdCaixas);

    return 0;
}

