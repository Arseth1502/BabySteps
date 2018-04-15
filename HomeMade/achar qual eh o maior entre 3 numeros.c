#include <stdio.h>

int main()
{
    //fazer um programa que receba três n e diga qual deles é o maior
   
    //
    
    int x, y, z, maior1, maior2;
    
    printf("Digite um primeiro numero:\n");
	scanf("%d", &x);    
	
	printf("Digite um segundo numero:\n");
	scanf("%d", &y);    
	
	printf("Digite um terceiro numero:\n");
	scanf("%d", &z);    
	
	if(x>y)
	maior1 = x;
	else
	maior1 = y;
	
	if(maior1>z)
	maior2 = maior1;
	else
	maior2 = z;
	
	printf ("O maior numero eh %d\n", maior2);

}
