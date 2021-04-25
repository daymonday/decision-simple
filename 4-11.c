#include <stdio.h>
#include <stdlib.h>
#define FEBRERO 2

int
main ()
{
  int a, m;
  printf ("Ingrese numero de anio:");
  scanf ("%d", &a);
  printf ("Ingrese numero de mes:");
  scanf ("%d", &m);
  if (m == FEBRERO)
    {
      a / 400;
      printf ("El mes tiene 29 dias.");
    }
  else if (!a/400)
  {
    printf("El mes tiene 28 dias.");
  }
  else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
  {
    printf ("El mes tiene 31 dias.");
  }
else
  {
    printf ("El mes tiene 30 dias.");
  }

return 0;
}
