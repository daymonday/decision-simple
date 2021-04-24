#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N1, N2, N3;
    int uno, dos,tres;
    printf("\nIngrese 3 numeros:");
    scanf("%d",&N1);
    printf("\nIngrese otro numero:");
    scanf("%d",&N2);
    printf("\nIngrese otro numero:");
    scanf("%d",&N3);

    if(N1>N2&&N1>N3)
    {
        uno=N1;
        if(N2 > N3)
        {

            dos=N2;
            tres=N3;
        }
        else
        {

            dos=N3;
            tres=N2;
        }
    }
    else if(N2>N1&&N2>N3)
    {
        uno=N2;

        if (N1 > N3)
        {
            dos=N1;
            tres=N3;
        }
        else
        {
            dos=N3;
            tres=N1;
        }
    }
    else
    {
        uno=N3;
        if (N2>N3)
        {
            dos=N2;
            tres=N3;
        }
        else
        {
            dos=N3;
            tres=N2;
        }
    }

    printf("\nEl orden es: %d,%d,%d\n",uno,dos,tres);

    system ("pause");
    return 0;
}
