
#include <stdio.h>
#include <conio.h>

int main()
{
int n1, n2;
int op;
int calculo;
    
    printf("Coloque o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Coloque o segundo numero: ");
    scanf("%d", &n2);
    
    printf("\n");
    printf("[1] Soma\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    printf("Coloque o operador: ");
    scanf("%d", &op);
    
    
    switch(op) {
        case 1:
        calculo = n1 + n2;
        printf("Resultado: %d", calculo);
    }
    
    switch(op) {
        case 2:
        calculo = n1 - n2;
        printf("Resultado: %d", calculo);
    }
    
    switch(op) {
        case 3:
        calculo = n1 * n2;
        printf("Resultado: %d", calculo);
    }
    switch(op) {
        case 4:
        calculo = n1 / n2;
        printf("Rsultado: %d", calculo);
    default:
    printf("Numero invalido! Escolha de 1 a 4");
    }
}
