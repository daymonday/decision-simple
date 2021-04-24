#include <stdio.h>
  
int
main () 
{
  int des_1, des_2, des_3, importe,precio_neto;
des_1 = 0.45;
 des_2 = 0.8;
 des_3 = 0.105;
printf ("Ingrese importe:");
scanf ("%d",&importe);
if (importe < 55)
    {
    printf ("Su descuento es de:%d",des_1);
    precio_neto = importe + importe * des_1;
    }
      else if (importe > 100)
	    {
         printf ("Su descuento es de:%d", des_3);	
        precio_neto = importe + importe * (1 / des_3);
	     }
	else	
	{printf ("Su descuento es de:%d",des_2);
	precio_neto = importe + importe * (1 / des_2);
	}
  
printf ("El precio neto es de:%d",precio_neto);
  
return 0;

}

