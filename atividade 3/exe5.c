#include <stdio.h>

int main()
{

int numero1, numero2;
char operacao;

printf("Digite o numero 1: ");
scanf("%d", &numero1);

printf("Digite o numero 2: ");
scanf("%d", &numero2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma (+)\n");
    printf("2 - Subtracao (-)\n");
    printf("3 - Multiplicacao (*)\n");
    printf("4 - Divisao (/)\n");
    printf("- - Subtracao\n");
    printf("+ - Soma\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    printf("Digite o numero da operacao ou o caractere da operacao: ");
    scanf(" %c", &operacao);

if (operacao == '1') {
    int resultado;
    resultado = numero1 + numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '2') {
    int resultado;
    resultado = numero1 - numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '3') {
    int resultado;
    resultado = numero1 * numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '4') {
    int resultado;
    resultado = numero1 / numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '+') {
    int resultado;
    resultado = numero1 + numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '-') {
    int resultado;
    resultado = numero1 - numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '*') {
    int resultado;
    resultado = numero1 * numero2;
    printf ("Resultado: %d", resultado);
} else if (operacao == '/') {
     int resultado;
     resultado = numero1 / numero2;
     printf ("Resultado: %d", resultado);
} else {
    printf("Numero inválido");
}
 
 
}
