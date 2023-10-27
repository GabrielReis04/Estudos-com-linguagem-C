#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Verificação de notas negativas
    if (nota1 < 0 || nota2 < 0 || nota3 < 0) {
        printf("Valores negativos não são permitidos.\n");
        return 1;  //  codigo de erro
    }

   //harmonica ponderada
    media = 3 / ((1/nota1) + (1/nota2) + (1/nota3));

    printf("A media harmonica ponderada: %f\n", media);

    return 0;
}

