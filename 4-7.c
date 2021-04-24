#include <stdio.h>

int
main ()
{
  int n1, n2, n3;
  printf ("\nIngrese un numero positivo:\n");
  scanf ("%d",&n1);
  printf ("\nIngrese otro numero positivo:\n");
  scanf ("%d",&n2);
  printf ("\nIngrese el ultimo numero positivo:\n");
  scanf ("%d",&n3);
  if (n3 == n1 + n2)
    {
      printf ("\nDetermina triangulo");
    }
  else
    {
      printf ("\nNo determina triangulo\n");
    }
  return 0;
}
