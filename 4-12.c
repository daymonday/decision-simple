#define BONO_50 500
#define BONO_150 1000
#include <stdio.h>

int main ()
{
    int valor_hora, cant_hora,sueldo;

    printf("\nIngrese valor de hora trabajadas:");
    scanf("%d",&valor_hora);
    printf("\nIngrese cantidad de horas trabajadas:");
    scanf("%d",&cant_hora);

    sueldo=valor_hora*cant_hora;

    if (cant_hora>50)
    {
        if (cant_hora>150)
        {
            printf("\nEl sueldo es %d",sueldo+BONO_50+BONO_150);
        }
        else
        {
            printf("\nEl sueldo es %d",sueldo+BONO_50);
        }
    }
    else
    {
        printf("\nEl sueldo es %d",sueldo);
    }

    return 0;
}
