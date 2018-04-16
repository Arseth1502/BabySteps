#include <stdio.h>

int main(void)
{
        int termos,
            razao,
            inicial,
            contador = 1;

        printf("Numero de termos da P.A: ");
        scanf("%d", &termos);

        printf("Razao da P.A: ");
        scanf("%d", &razao);

        printf("Elemento inicial da P.A: ");
        scanf("%d", &inicial);

        while(contador <= termos) 
        {
         (inicial + (contador-1) * razao);
         printf("Termo %d: %d\n", contador, (inicial + (contador-1) * razao));
          contador++;
		}
         
}
