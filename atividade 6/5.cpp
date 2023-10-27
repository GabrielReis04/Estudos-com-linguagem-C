//exercicio 6

#include <stdio.h>

int main() {
    int valor;
    
    // Solicita ao usu�rio que digite um valor em reais e l� esse valor.
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    
    // Declara um array 'cedulas' com as diferentes c�dulas/moedas dispon�veis.
    int cedulas[8] = {200, 100, 50, 20, 10, 5, 2, 1};
    
    // Declara um array 'quantidadeCedulas' para armazenar a quantidade de cada c�dula/moeda.
    int quantidadeCedulas[8] = {0};
    
    // Exibe uma mensagem indicando que a contagem de c�dulas/moedas ser� mostrada.
    printf("\nQuantidade de c�dulas/moedas:\n");
    
    // Loop para calcular a quantidade de cada c�dula/moeda e exibir os resultados.
    for (int i = 0; i < 8; i++) {
        // Calcula a quantidade de c�dulas/moedas do valor atual.
        quantidadeCedulas[i] = valor / cedulas[i];
        
        // Atualiza o valor restante com o valor que n�o pode ser formado por essa c�dula/moeda.
        valor %= cedulas[i];
        
        // Verifica se a quantidade de c�dulas/moedas � maior que zero para exibi��o.
        if (quantidadeCedulas[i] > 0) {
            // Verifica se o valor da c�dula/moeda � maior ou igual a 5 para diferenciar moedas e notas.
            if (cedulas[i] >= 5) {
                printf("%d nota(s) de %d reais\n", quantidadeCedulas[i], cedulas[i]);
            } else {
                printf("%d moeda(s) de %d real\n", quantidadeCedulas[i], cedulas[i]);
            }
        }
    }
    
    return 0;
}

