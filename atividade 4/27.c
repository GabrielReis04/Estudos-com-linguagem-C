#include <stdio.h>
#include <math.h>

int main() {
    const double COBERTURA_POR_LATA = pow(9.0, 2);  // Metros quadrados por lata de tinta

    double altura, raio;
    double areaCilindro, quantidadeLatas;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    // Calcular a área da superfície do cilindro
    areaCilindro = 2 * M_PI * raio * (raio + altura);

    // Calcular a quantidade de latas de tinta necessárias
    quantidadeLatas = areaCilindro / COBERTURA_POR_LATA;

    printf("A quantidade de latas de tinta necessárias é: %.5lf\n", quantidadeLatas);

    return 0;
}
