#include <stdio.h>
#define des_1=4.5
#define des_2=8
#define des_3=10.5

main()
{
    printf("Ingrese importe:");
    scanf("%d",importe);
    if importe<55
        {printf("Su descuento es de:%d",des_1);
        precio_neto=importe+importe*(1/des_1)
        else
            {
                if importe>100
                    printf("Su descuento es de:%d",des_3);
                    precio_neto=importe+importe*(1/des_3)
                    else
                    printf("Su descuento es de:%d",des_2);
                    precio_neto=importe+importe*(1/des_2)
            }

    }
    printf("Su descuento es de:%d",precio_neto);
    return 0;
}
