int
main ()
{
  int N1, N2, N3;
  printf ("\nIngrese 3 numeros:\n\n");
  scanf ("%d", &N1);
  printf ("\nIngrese otro numero:\n\n");
  scanf ("%d", &N2);
  printf ("\nIngrese otro numero:\n\n");
  scanf ("%d", &N3);
  if (N1 == N2 + N3)
    {
      printf ("%d es el producto de N2 y N3", N1);
    }
  else if (N2 == N1 + N3)
    {
      printf ("%d es el producto de N1 y N3", N2);
    }

  else if (N2 == N1 + N3)
    {
      printf ("%d es el producto de N1 y N3", N2);
    }

  else
    {
      printf ("%d es el producto de N1 y N2", N3);
      printf ("%d es el producto de N1 y N2", N3);
    }

  return 0;
}
