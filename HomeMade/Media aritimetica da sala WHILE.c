#include <stdio.h>

int main()
{
        int alunos,
        contagem = 1;
        float nota,
              soma = 0;
              
        printf("Quantos alunos tem na sua sala?\n");
        scanf("%d", &alunos);
        
        while(contagem <= alunos)
        {
          printf("Digite a nota do %d* aluno.\n", contagem);
          scanf("%f", &nota);
          
          soma = soma + nota;
                
          contagem++;
		}
		
		printf("A media da sala eh %.2f", (soma/alunos));
		
	}
