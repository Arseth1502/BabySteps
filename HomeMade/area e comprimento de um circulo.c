#include <stdio.h>

 int main()
 {

   //Escrever um programa que pergunte o raio de uma circunfer�ncia, e sem seguida mostre o di�metro, comprimento e �rea da circunfer�ncia.

    float raio, diametro, comprimento, area; 
	float pi = 3.14;
        
    printf("Digite o raio da circunferencia\n");
    scanf("%f", &raio);
    
    diametro = 2 * raio;
    
    printf("O diametro eh %f\n", diametro);
    
    comprimento = 2 * pi * raio;
    
    printf("O comprimento eh %f\n", comprimento);
    
    area = pi * raio * raio;
    
    printf("A area eh %f\n", area);
    
}
    
    
 
