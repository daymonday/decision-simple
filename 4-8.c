#include <stdio.h>

int main()
{ int n1,n2;
    printf("\nIngrese un numero entero:\n");
    scanf("%d",&n1);
    printf("\nIngrese otro numero entero:\n");
    scanf("%d",&n2);
    if(n1/n2)
    {
    printf("Es divisible");
    }
    else
    {
        printf("No es divisible");
    }
    return 0;
}


