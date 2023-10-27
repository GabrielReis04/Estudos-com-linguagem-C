
#include <stdio.h>

int main()
{
float total, valor_unitario;
//calculo
int grupodetres;
int produtosindividuais;
int quantidade_comprada;

printf("Coloque a quantidade comprada: ");
scanf("%d", &quantidade_comprada);

printf("Coloque o valor unitario: ");
scanf("%f", &valor_unitario);

 // Cálculo do total a ser pago considerando a promoção
grupodetres = quantidade_comprada / 3;
produtosindividuais = quantidade_comprada % 3;

printf("produtos individuais: %d\n", produtosindividuais);

//total a ser pago

total = (grupodetres * 2 + produtosindividuais) * valor_unitario;

printf("Resposta: %.2f", total);




    return 0;
}
