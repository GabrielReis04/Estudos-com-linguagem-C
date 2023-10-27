
#include <stdio.h>
#include <conio.h>

int main()
{
char letra;
    
    printf("Coloque a letra: ");
    scanf("%s", &letra);
 
    
    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        
        case 'o':
        case 'u':
        printf("Vogal");
        break;
    default:
    printf("Consoante");
    }
    return 0;
}
