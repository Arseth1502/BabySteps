#include <stdio.h>

int main(void)
{
	 int patinhos, minimo, minimo2 = 2, num;
	 
	 printf("Digite um certo numero de patinhos:\n\n\n");
     scanf("%d", &patinhos);
     
     minimo = patinhos;
     
     while (minimo >= 3)
     {
     	printf("\n\n%d patinhos foram passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua, qua\nMas soh %d patinhos voltaram de la.\n\n", minimo, (minimo - 1));
     	minimo--;

	 }
	 
	  while ( minimo >= minimo2)
     {
     	printf("\n\n%d patinhos foram passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua, qua\nMas soh %d patinho voltou de la.\n\n", minimo, (minimo - 1));
     	minimo--;

	 }
	 
	    printf("\n\n%d patinho foi passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua, qua\nMas nenhum patinho voltou de la.\n\n\n\n\n\n\n", minimo, (minimo - 1));
	    
	    printf("\:(\n\n\n\n\n\n\n");
	    
	    
	     printf("\Triste nao? Mas voce pode mudar essa historia.\nEscolha um numero par para um final feliz e um impar para um final triste.\n\n\n\n\n\n\n");
	     scanf("%d", &num);
	     
	     if((num %2) == 0)
	     {
		    
	        printf("\n\n\nA mamae patinha foi procurar\nAlem das montanhas\nNa beira do mar\nA mamae gritou: Qua, qua, qua, qua\nE %d potes de coxinha no caminhao da Kentucky voltaram de la.\n\n\n", patinhos);
	     }
	     else 
	     {
	     	 printf("\n\n\nNao existe mamae, nao existem patinhos.\nAs montanhas representam seus sonhos\ne os patinhos sumindo, suas\nesperancas sendo destruidas uma por uma\na medida que voce avanca na vida.\n\n\nA mamae representa a origem da vida\ne ela indo te procurar eh a propria morte\nbuscando o que eh de direito: Sua vida.\n\n\nO grito da pata eh na verdade teu proprio choro apos teu nascimento.\no fato de isso se perdurar constantamente na musica\nrepresenta teu subconsciente lhe dizendo para voltar pro utero da sua mae\n\nE nao nascer, ou seja: morrer.\n\n\nQua, qua, qua.\n\n\nRepasse esta mensagem corrente ou vc serah amaldicoado\ncom muitas reprovacoes nos proximos semestres\n\n\nTenha um otimo dia.\n\n");
		 }
		 system("PAUSE");
	 }
