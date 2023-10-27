#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Digite o valor do lado a: ");
    scanf("%f", &a);

    printf("Digite o valor do lado b: ");
    scanf("%f", &b);

    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    // Calculo do semi-parametro
    s = (a + b + c) / 2;

    //formula de Heron
    area = sqrt(s * (s - a) * (s - b) * (s - c));


    printf("A area do triangulo: %f\n", area);

    return 0;
}
