#include <stdio.h>

int main() {
    float media, nota1, nota2, nota3;
    
    printf("Nota1: ");
    scanf("%f", &nota1);
    
    printf("Nota2: ");
    scanf("%f", &nota2);
    
    printf("Nota3: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("Media: %f", media);

    return 0;
}
