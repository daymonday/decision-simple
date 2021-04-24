#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1,n2,n3;
    printf("\nIngrese 3 numeros distintos:");
    scanf("%d",&n1);
    printf("\nIngrese otro numero:");
    scanf("%d",&n2);
    printf("\nIngrese otro numero:");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {

        printf("\n%d es mayor\n",n1);

    }
    else if(n2>n1 && n2>n3)
    {
        printf("\n%d es mayor\n", n2);
    }
    else
    {
        printf("\n%d es mayor\n",n3);
    }

    system ("pause");
    return 0;
}

