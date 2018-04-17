#include <stdio.h>

int main()
{
    int idade;
    
    printf("Este site possui restricoes. Digite aqui sua idade.\n");
    scanf("%d",&idade);

    if( idade >= 18)
    {
        printf("Parabens, voce pode fapar a vontade(se for fapar com mais alguem use camisinha)\n");
    }
    else
    {
        printf("Vaza daqui, fdp\n");
    }
}

