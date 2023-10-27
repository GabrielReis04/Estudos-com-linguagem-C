#include <stdio.h>

#include <stdio.h>

int main() {
  float salario_inicial, aumento, calculo, ajuste_aplicado;

  // salario inicial
  printf("Coloque o salario inicial: ");
  scanf("%f", &salario_inicial);

  // Colocar %
  printf("Coloque a porcentagem de aumento: ");
  scanf("%f", &aumento);

  calculo = salario_inicial * (aumento / 100.0); // Certifique-se de dividir a porcentagem por 100

  ajuste_aplicado = calculo + salario_inicial;

  printf("Resultado: %f", ajuste_aplicado);

  return 0;
}

