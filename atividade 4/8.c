#include <stdio.h>

int main() {
    float n1, n2, n3_min;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    // Calculo do valor maximo da terceira nota para media 6
    n3_min = (3 * n1 * n2) / (n1 + n2 - 2);

    printf("O valor maximo da terceira nota para media 6: %f\n", n3_min);

    return 0;
}
