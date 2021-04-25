#include <stdio.h>
  
int
main () 
{
  float des_1, des_2, des_3, importe,precio_neto;
des_1 = 0.045;
 des_2 = 0.08;
 des_3 = 0.105;
printf ("Ingrese importe:");
scanf ("%f",&importe);
if (importe < 55)
    {
    printf ("Su descuento es de:%.2f",des_1*100);
    precio_neto = importe - importe * des_1;
    }
      else if (importe > 100)
	    {
         printf ("Su descuento es de:%.2f", des_3*100);	
        precio_neto = importe - importe * des_3;
	     }
	else	
	{printf ("Su descuento es de:%.2f",des_2*100);
	precio_neto = importe - importe * des_2;
	}
  
printf ("El precio neto es de:%.2f",precio_neto);
  
return 0;

}

