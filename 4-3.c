#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N1, N2, N3;
    printf("\nIngrese 3 numeros:");
    scanf("%d",&N1);
    printf("\nIngrese otro numero:");
    scanf("%d",&N2);
    printf("\nIngrese otro numero:");
    scanf("%d",&N3);
    if(N1==N2*N3)
    {
        printf("\n%d es el producto de N2 y N3\n",N1);
    }
    else if(N2==N1*N3)
    {
        printf("\n%d es el producto de N1 y N3\n",N2);
    }
    else if(N3==N2*N1)
    {
        printf("\n%d es el producto de N1 y N2\n",N3);
    }

    system ("pause");
    return 0;
}
