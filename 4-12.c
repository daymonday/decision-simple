#define bono50=500
#define bono150=1000
#include <stdio.h>

main ()
{
    printf("Ingrese valor de hora trabajadas:");
    scanf("%d"&valor_hora)
    printf("Ingrese cantidad de horas trabajadas:");
    scanf("%d"&cant_hora);
    sueldo=valor_hora*cant_hora

    if cant_hora>50
    {
        if cant_hora>150
            printf("El sueldo es %d",sueldo+bono50+bono150);
        else printf("El sueldo es %d",sueldo+bono50);
    }
    else printf("El sueldo es %d",sueldo);

    return 0;
}
