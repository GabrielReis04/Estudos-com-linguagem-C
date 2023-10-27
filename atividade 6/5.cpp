//exercicio 6

#include <stdio.h>

int main() {
    int valor;
    
    // Solicita ao usuário que digite um valor em reais e lê esse valor.
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    
    // Declara um array 'cedulas' com as diferentes cédulas/moedas disponíveis.
    int cedulas[8] = {200, 100, 50, 20, 10, 5, 2, 1};
    
    // Declara um array 'quantidadeCedulas' para armazenar a quantidade de cada cédula/moeda.
    int quantidadeCedulas[8] = {0};
    
    // Exibe uma mensagem indicando que a contagem de cédulas/moedas será mostrada.
    printf("\nQuantidade de cédulas/moedas:\n");
    
    // Loop para calcular a quantidade de cada cédula/moeda e exibir os resultados.
    for (int i = 0; i < 8; i++) {
        // Calcula a quantidade de cédulas/moedas do valor atual.
        quantidadeCedulas[i] = valor / cedulas[i];
        
        // Atualiza o valor restante com o valor que não pode ser formado por essa cédula/moeda.
        valor %= cedulas[i];
        
        // Verifica se a quantidade de cédulas/moedas é maior que zero para exibição.
        if (quantidadeCedulas[i] > 0) {
            // Verifica se o valor da cédula/moeda é maior ou igual a 5 para diferenciar moedas e notas.
            if (cedulas[i] >= 5) {
                printf("%d nota(s) de %d reais\n", quantidadeCedulas[i], cedulas[i]);
            } else {
                printf("%d moeda(s) de %d real\n", quantidadeCedulas[i], cedulas[i]);
            }
        }
    }
    
    return 0;
}

