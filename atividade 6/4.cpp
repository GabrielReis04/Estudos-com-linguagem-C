//Exercicio 5

#include <stdio.h>

int main() {
    // Declarando vari�veis
    float inicio_odometro, final_odometro, litros_combustivel, valor_recebido;
    float preco_combustivel = 0.90; // Pre�o do combust�vel em R$
    float media_consumo, lucro_liquido;
    float custo_combustivel;

    // Leitura dos dados
    printf("Digite a marcacao do odometro no inicio do dia (Km): ");
    scanf("%f", &inicio_odometro);

    printf("Digite a marcacao do odometro no final do dia (Km): ");
    scanf("%f", &final_odometro);

    printf("Digite o numero de litros de combustivel gasto: ");
    scanf("%f", &litros_combustivel);

    printf("Digite o valor total (R$) recebido dos passageiros: ");
    scanf("%f", &valor_recebido);

    // C�lculo da m�dia de consumo
    float distancia_percorrida = final_odometro - inicio_odometro;
    media_consumo = distancia_percorrida / litros_combustivel;

    // C�lculo do lucro l�quido
    custo_combustivel = litros_combustivel * preco_combustivel;
    lucro_liquido = valor_recebido - custo_combustivel;

    // Exibi��o dos resultados
    printf("\nMedia de consumo: %.2f Km/l\n", media_consumo);
    printf("Lucro liquido do dia: R$%.2f\n", lucro_liquido);

    return 0;
}

