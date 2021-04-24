#include <stdio.h>
#define DES_1 4.5
#define DES_2 8
#define DES_3 10.5

int main()
{
    int importe, precio_neto;
    printf("\nIngrese importe:");
    scanf("%d",&importe);
    if (importe<55)
    {
        printf("\n\nSu descuento es de:%d",DES_1);
        precio_neto=importe+importe*(1/DES_1);
    }
    else
    {

        if (importe>100)
        {
            printf("\nSu descuento es de:%d",DES_3);
            precio_neto=importe+importe*(1/DES_3);
        }
        else
        {
            printf("\nSu descuento es de:%d",DES_2);
            precio_neto=importe+importe*(1/DES_2);
        }


    }

    printf("\nSu precio neto es de:%d",precio_neto);
    return 0;
}
