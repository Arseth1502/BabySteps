#include <stdio.h>
#include <math.h>

int main(void)
{
        double termos,
            razao,
            inicial,
            elemento,
            count;

        printf("Numero de termos da P.G: ");
        scanf("%f", &termos);

        printf("Razao da P.G: ");
        scanf("%f", &razao);

        printf("Elemento inicial da P.G: ");
        scanf("%f", &inicial);

        for(count = 1; count <= termos ; count++)
            printf("Termo %f: %f\n", count, inicial* pow(razao,count-1) );
}
