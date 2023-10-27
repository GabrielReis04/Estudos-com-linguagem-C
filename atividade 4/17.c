#include <stdio.h>

 int
main ()
{
  
int hora1, minuto1, segundo1;
  
int hora2, minuto2, segundo2;
  
int segundos_total1, segundos_total2;
  
int diferenca_segundos;
  
 
printf ("Digite o primeiro horario (hora minuto segundo): ");
scanf ("%d %d %d", &hora1, &minuto1, &segundo1);
  
 // Verificações para o primeiro horário
if (hora1 < 0 || hora1 > 23 || minuto1 < 0 || minuto1 > 59 || segundo1 < 0 || segundo1 > 59) {
    printf ("Horario invalido!");
    return 1;
    
}

  
printf ("Digite o segundo horario (hora minuto segundo): ");
scanf ("%d %d %d", &hora2, &minuto2, &segundo2);
  
 // Verificações para o seg segundo horário
if (hora2 < 0 || hora2 > 23 || minuto2 < 0 || minuto2 > 59 || segundo2 < 0 || segundo2 > 59 ) {
    printf("Horario invalido");
    return 1; 
}
    
 
      // calculo do total de segundos para cada horC!rio
      //1 hora = 3600 segundos
      segundos_total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
  
segundos_total2 = hora2 * 3600 + minuto2 * 60 + segundo2;
  
 
    //calculo da diferença de segundos entre os horC!rios
    diferenca_segundos = segundos_total2 - segundos_total1;
  
 
printf ("A diferença em segundos entres os horarios: %d\n", diferenca_segundos);
  
 
return 0;

}


