#include <stdio.h>
#include <conio.h>

main(){
       int n1,n2,n3;
       printf("Digite o primeiro numero: ");
       scanf("%d",&n1);
       printf("Digite o segundo numero: ");
       scanf("%d",&n2);
       printf("Digite o terceiro numero: ");
       scanf("%d",&n3);
       
       if(n1 > n2 && n1 > n3){
             printf("O maior numero eh %d",n1);
       }
       if(n2 > n1 && n2 > n3){
             printf("O maior numero eh %d",n2);
       }
       if(n3 > n2 && n3 > n1){
             printf("O maior numero eh %d",n3);
       }       
       getch();

}
