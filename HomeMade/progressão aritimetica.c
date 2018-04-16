#include <stdio.h>

int main(void)
{
        int termos,
            razao,
            inicial,
            contador,
			resultado;

        printf("Numero de termos da P.A: ");
        scanf("%d", &termos);

        printf("Razao da P.A: ");
        scanf("%d", &razao);

        printf("Elemento inicial da P.A: ");
        scanf("%d", &inicial);

        for(contador = 1; contador <= termos ; contador++)
        {
		    resultado = (inicial + (contador-1) * razao); 
            printf("Termo %d: %d\n", contador, resultado);
        }
}
