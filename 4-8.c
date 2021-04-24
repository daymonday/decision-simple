#include <stdio.h>

int main()
{
    int n1,n2;
    printf("\nIngrese dos numeros enteros:");
    scanf("%d",&n1);
    printf("\nIngrese dos numeros enteros:");
    scanf("%d",&n2);
    if(n1%n2==0)
    {
        printf("\nEs divisible");
    }
    else
    {
        printf("\nNo es divisible");
    }

    return 0;
}
