#include <stdio.h>

 int main()
 {
	
	int x, y, maior;
	
	//criar 3 variáveis, uma para o primeiro número, outra para o segundo e a terceira para o resultado comparativo
	
     printf("Digite o primeiro numero:\n");
 	 scanf("%d", &x);
 	 
 	 printf("Digite o segundo numero:\n");
 	 scanf("%d", &y);
 	 
 	 if (x > y)
	  {
 	maior = x;
 	  }
 	 else
	  { 
 	maior = y;
      }
      
      printf("%d eh maior", maior);
	
}
