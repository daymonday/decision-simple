#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N1, N2, N3;
  printf ("\n Ingrese 3 numeros:");
  scanf ("%d", &N1);
  printf ("\n Ingrese otro numero:");
  scanf ("%d", &N2);
  printf ("\n Ingrese otro numero:");
  scanf ("%d", &N3);
  if (N1 < N2 && N1 < N3)
    {
      printf ("%d es menor", N1);
    }
  else if (N2 < N1 && N2 < N3)
    {
      printf ("%d es menor", N2);
    }
  else
    {
      printf ("%d es menor", N3);
    }
  system ("pause");
  return 0;
}
