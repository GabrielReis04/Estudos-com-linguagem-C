#include <stdio.h>
#include <math.h>

int main() {
    float aresta, volume, area_superficie;
    
    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &aresta);

 //volume do cubo
    volume = pow(aresta, 3);

    //area da superficie do cubo 
    area_superficie = 6 * aresta * aresta;

    printf("O volume do cubo: %f\n", volume);
    printf("Area da superficie: %f\n", area_superficie);

    return 0;
}
