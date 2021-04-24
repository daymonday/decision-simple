#include <stdio.h>

int
main ()
{
  int N1, N2, N3;
  char uno, dos, tres;
  printf ("\nIngrese 3 numeros:\n");
  scanf ("%d", &N1);
  printf ("\nIngrese otro numero:\n");
  scanf ("%d", &N2);
  printf ("\nIngrese otro numero:\n");
  scanf ("%d", &N3);
  if (N1 > N2 && N1 > N3)
    {
      uno = N1;
    }
  if (N2 > N3)
    {
      dos = N2;
      tres = N3;

    }
  else
    {
      dos = N3;
      tres = N2;
    }
  else
if (N2 > N1 && N2 > N3)
  {

    uno = N2;
  }
  {
    else
  if (N1 > N3)
    {
      dos = N1;
      tres = N3;
    }
  else
    {
      dos = N3;
      tres = N1;
    }
  }
  else
  {
    uno = N3;
  }
  {
    if (N2 > N3)
      {
	dos = N2;
	tres = N3;
      }
    else
      {
	dos = N3;
	tres = N2;
      }
  }
  printf ("\nEl orden es:%c,%c,%c\n", uno, dos, tres);
  return 0;
}

