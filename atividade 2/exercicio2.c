
#include <stdio.h>
#include <conio.h>

int main()
{
int n1;
    
    printf("Coloque o numero: ");
    scanf("%d", &n1);
 
    
    switch(n1) {
        case 1:
        printf("Domingo");
        break;
        
        case 2:
        printf("Segunda");
        break;
        
        case 3:
        printf("Terca");
        break;
        
        case 4:
        printf("Quarta");
        break;
        
        case 5:
        printf("Quinta");
        break;
        
        case 6:
        printf("Sexta");
        break;
        
        case 7:
        printf("Sabado");
        break;
    default:
    printf("Numero invalido! Escolha de 1 a 7");
    }
    return 0;
}
