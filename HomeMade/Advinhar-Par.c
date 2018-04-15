#include <stdio.h>

int main()
{
    int numero;
    
    printf("Vou descobrir se teu numero eh par, digita ae qualquer numero\n");
    scanf("%d",&numero);

    if( (numero % 2) == 0 )
    {
        printf("Eh par, viu soh?\n");
    }
    else
    {
        printf("Eu disse par, carai\n");
    }
}

