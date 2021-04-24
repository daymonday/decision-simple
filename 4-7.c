#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("\nIngrese tres numeros positivos:");
    scanf("%d",&n1);
    printf("\nIngrese tres numeros positivos:");
    scanf("%d",&n2);
    printf("\nIngrese tres numeros positivos:");
    scanf("%d",&n3);

    if(n3==n1+n2)
    {
        printf("\nDetermina triangulo\n");
    }
    else
    {
        printf("\nNo determina triangulo\n");
    }
    return 0;
}

