#include <stdio.h>

int main()
{
    //fazer um programa que receba tr�s n e diga qual deles � o maior
   
    //
    
    int x, y, z;
    
    printf("Digite um primeiro numero:\n");
	scanf("%d", &x);    
	
	printf("Digite um segundo numero:\n");
	scanf("%d", &y);    
	
	printf("Digite um terceiro numero:\n");
	scanf("%d", &z);    
	

    // o maior n�mero
    if (x > y)
    {
        if(x > z)
        {
            printf("O maior numero eh: %d\n", x);
        }
        else
        {
            printf("O maior numero eh: %d\n", z);
        }
    }
    else
    {
        if(y > z)
        {
            printf("O maior numero eh: %d\n", y);
        }
        else
        {
            printf("O maior numero eh: %d\n", z);
        }
    }
    
     // o menor n�mero
     
         if (x < y)
    {
        if(x < z)
        {
            printf("O menor numero eh: %d\n", x);
        }
        else
        {
            printf("O menor numero eh: %d\n", z);
        }
    }
    else
    {
        if(y < z)
        {
            printf("O menor numero eh: %d\n", y);
        }
        else
        {
            printf("O menor numero eh: %d\n", z);
        }
    }

}
