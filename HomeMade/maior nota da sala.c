#include <stdio.h>

int main()
{
        int alunos,
        num,
        maior,
        contagem = 1;

        printf("Quantos alunos tem na sua sala?\n");
        scanf("%d", &alunos);
        
        while(contagem <= alunos)
        {
          printf("Digite a nota do %d* aluno.\n", contagem);
          scanf("%d", &num);
          
          if( num > maior)
                maior=num;
                
          contagem++;
		}
		
		printf("A maior nota da sala eh %d", maior);
		
	}
