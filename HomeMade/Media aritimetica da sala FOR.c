#include <stdio.h>

int main()
{
        int alunos,
        contagem;
        float nota,
              soma = 0;
              
        printf("Quantos alunos tem na sua sala?\n");
        scanf("%d", &alunos);
        
        for(contagem = 1, soma; contagem <= alunos; contagem++)
        {
          printf("Digite a nota do %d* aluno.\n", contagem);
          scanf("%f", &nota);
          
          soma = soma + nota;
                
		}
		
		printf("A media da sala eh %f", (soma/alunos));
		
	}
