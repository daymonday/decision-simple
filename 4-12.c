
#include <stdio.h>
  
int
main () 
{
  int valor_hora, cant_hora, bono50, bono150, sueldo;
  
 
bono50 = 500;
bono150 = 1000;
printf ("Ingrese valor de hora trabajadas:");
scanf ("%d", &valor_hora);
printf ("Ingrese cantidad de horas trabajadas:");
scanf ("%d", &cant_hora);
sueldo = valor_hora * cant_hora;
if (cant_hora > 50)
     {
      printf ("El sueldo es %d", sueldo + bono50);
    }
  else if(cant_hora>150) 
  { 
      printf ("El sueldo es %d", sueldo + bono50 + bono150);
       }
else 
{
    printf ("El sueldo es %d", sueldo);
    
}

return 0;
 
}

