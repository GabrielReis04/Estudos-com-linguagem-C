#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2;
    float y1, y2;
    float distancia;
    float raiz;
    
    printf("x1:");
    scanf("%f", &x1);
    
    printf("x2:");
    scanf("%f", &x2);
    
    printf("y1:");
    scanf("%f", &y1);
    
    printf("y2:");
    scanf("%f", &y2);
    
    //calcula a distancia
    distancia = pow (x2- x1, 2) + pow (y2-y1, 2);
    
    //calcula a raiz
    raiz = sqrt (distancia);
    
    printf ("Distancia: %f", raiz);

    return 0;
}