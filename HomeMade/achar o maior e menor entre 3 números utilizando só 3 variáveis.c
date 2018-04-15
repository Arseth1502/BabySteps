#include <stdio.h>

int main()
{
    //fazer um programa que receba três n e diga qual deles é o maior
   
    //
    
    int x, y, z;
    
    printf("Digite um primeiro numero:\n");
	scanf("%d", &x);    
	
	printf("Digite um segundo numero:\n");
	scanf("%d", &y);    
	
	printf("Digite um terceiro numero:\n");
	scanf("%d", &z);    
	

    // o maior número
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
    
     // o menor número
     
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
