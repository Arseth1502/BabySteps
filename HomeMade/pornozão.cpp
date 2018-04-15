#include <stdio.h>

int main()
{
    int idade;
    
    printf("Este site possui restricoes. Digite aqui sua idade.\n");
    scanf("%d",&idade);

    if( idade >= 18)
    {
        printf("Parabens, voce pode fapar a vontade\n");
    }
    else
    {
        printf("Vaza daqui, fdp\n");
    }
}

