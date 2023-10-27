#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float areaParedes, qtdCaixas;

    // Leitura das dimens�es da cozinha
    printf("Informe o comprimento da cozinha em metros: ");
    scanf("%f", &comprimento);

    printf("Informe a largura da cozinha em metros: ");
    scanf("%f", &largura);

    printf("Informe a altura da cozinha em metros: ");
    scanf("%f", &altura);

    // C�lculo da �rea das paredes (sem descontar portas e janelas)
    areaParedes = 2 * altura * (comprimento + largura);

    // C�lculo da quantidade de caixas de azulejos
    qtdCaixas = areaParedes / 1.5;

    // Exibi��o do resultado
    printf("Quantidade de caixas de azulejos necess�rias: %.2f\n", qtdCaixas);

    return 0;
}

