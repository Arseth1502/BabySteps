#include <stdio.h>

 int main()
 {
 	
   int dia, mes, ano;
   
    printf("Digite o dia em que nasceu\n");
     scanf("%d", &dia);
     
     if (dia <= 31 && dia >= 1)
     {
     	 printf("Ok!\n");
	 }
         else
     {
     	 printf("Este numero eh invalido, digite um dia entre 1 e 31\n");
		 }    
		 
     printf("Digite o mes em que nasceu\n");
     scanf("%d", &mes);
     
     if (mes <= 12 && dia >= 1)
     {
     	 printf("Ok!\n");
	 }
         else
     {
     	 printf("Este numero eh invalido, digite um mes entre 1 e 12\n");
		 }    
     
     printf("Digite o ano em que nasceu\n");
     scanf("%d", &ano);
     
     if (ano <= 2013)
     {
     	 printf("Ok!\n");
	 }
         else
     {
     	 printf("Este numero eh invalido, digite um ano menor ou igual a 2018\n");
		 }    
		 
	}
