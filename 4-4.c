#include <stdio.h>

int main ()
{
    int N1,N2,N3;
    printf("\nIngrese 3 numeros:");
    scanf("%f",&N1);
    printf("\nIngrese otro numero:");
    scanf("%f",&N2);
    printf("\nIngrese otro numero:");
    scanf("%f",&N3);
    if(N1==N2&&N3==N1&&N2==N3)
    {
        printf("\nTRES IGUALES");
    }
    else if(N3<N1&&N3<N2)
    {
        printf("\nMayores al tercero");
    }
    else
    {
        printf("\nAlguno es mayor al tercero");
    }
    printf("\n");
    system ("pause");
    return 0;
}
