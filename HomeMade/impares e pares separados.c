#include <stdio.h>

int main()
{
        int numero,
            contador = 1;

        printf("Digite um numero: ");
        scanf("%d", &numero);

        printf("IMPARES \tPARES\n\n");

        for(contador = 1; contador <= numero; contador++)
        {
            if(contador%2 == 1)
                printf("    %d \t",contador);
            else
                printf("    \t %d\n", contador);
        }
}
