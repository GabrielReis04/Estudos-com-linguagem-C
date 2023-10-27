#include <stdio.h>
#include <math.h>

int main() {
    float a, b, graus, radianos, area;


    printf("Digite o valor do lado a: ");
    scanf("%f", &a);

    printf("Digite o valor do lado b: ");
    scanf("%f", &b);

    printf("Digite o valor do angulo entre os lados em graus: ");
    scanf("%f", &graus);

    // Conversão do angulo de graus para radianos
    radianos = graus * (M_PI / 180.0);

    // Calculo da Area do triangulo ( Seno = sin)
    area = (a * b * sin(radianos)) / 2;

    printf("A area do triango: %f\n", area);

    return 0;
}
