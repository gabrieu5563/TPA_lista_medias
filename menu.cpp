#include<stdio.h>
int main()
{
	int c, l, ex, rep;
	float nota[4][3], menor[4][2];
	rep=1;
	
	do{
		printf("1 - Preencher as notas\n");
		printf("2 - Preencher automaticamente as notas e medias\n");
		printf("3 - Calcular as medias\n");
		printf("4 - Exibe as notas e medias\n");
		printf("5 - Calcular a media da sala e verificar quantos estao acima da media\n");
		printf("6 - Exibir quantos alunos tiraram ao menos um Zero\n");
		printf("0 - Encerrar o codigo\n");
		scanf("%d", &ex);
		
		switch (ex)
		{
			case 0:
				rep = 0;
				break;
				
			case 1:
				 for (l = 0 ; l < 5; l++)
		 		{
		 			for (c = 0; c < 4; c++)
		 			{
		 				printf("Digite uma nota: ");
		 				scanf("%f", &nota[l][c]);
					}
		 		}
		 	
				break;
				
			case 2:
				nota[0][0]=5;
				nota[0][1]=7;
				nota[0][2]=4;
				nota[1][0]=0;
				nota[1][1]=3;
				nota[1][2]=10;
				nota[2][0]=8.5;
				nota[2][1]=5.2;
				nota[2][2]=0;
				nota[3][0]=9;
				nota[3][1]=4;
				nota[3][2]=9;
				nota[4][0]=6.7;
				nota[4][1]=3.5;
				nota[4][2]=9.5;
				
				for(l = 0; l < 5; l++)
				{
					if(nota[l][0] < nota[l][1] && nota[l][0] < nota[l][2]){
						menor[l][0] = nota[l][1];
						menor[l][1] = nota[l][2];
					}else{
						if(nota[l][1] < nota[l][2]){
							menor[l][0] = nota[l][0];
							menor[l][1] = nota[l][1];
						}else{
							menor[l][0] = nota[l][1];
							menor[l][1] = nota[l][2];
						}
					}
					
					nota[l][3] = (menor[l][0] + menor[l][1]) / 2;
				}
				
				break;
				
			case 3:
				for(l = 0; l < 5; l++)
				{
					if(nota[l][0] < nota[l][1] && nota[l][0] < nota[l][2]){
						menor[l][0] = nota[l][1];
						menor[l][1] = nota[l][2];
					}else{
						if(nota[l][1] < nota[l][2]){
							menor[l][0] = nota[l][0];
							menor[l][1] = nota[l][1];
						}else{
							menor[l][0] = nota[l][1];
							menor[l][1] = nota[l][2];
						}
					}
					
					nota[l][3] = (menor[l][0] + menor[l][1]) / 2;
				}
				break;
				
			case 4:
				for (l = 0; l < 5; l++)
				{
					printf("\n\nAluno: %d",l+1);
					printf("\nNota 1: %.1f",nota[l][0]);
					printf("\nNota 2: %.1f",nota[l][1]);
					printf("\nNota 3: %.1f",nota[l][2]);
					printf("\nMedia: %.1f",nota[l][3]);
				}
				break;
				
			case 5:
				int medias, maior, alunomaior;
				medias=(nota[0][3]+nota[1][3]+nota[2][3]+nota[3][3]+nota[4][3])/5;
	
				for (l = 0; l < 5; l++)
				{
					alunomaior = 0;
					if(nota[l][3] > medias && alunomaior == 0)
					{
						maior++;
						alunomaior++;
					}
				}
				printf("%d alunos ficaram acima da media da sala.", maior);
				break;
				
			case 6:
				int zero, aluno0;
				
				for (l = 0; l < 5; l++)
				{
					aluno0 = 0;
					
					for(c = 0; c < 3; c++)
					{
						if(nota[l][c] < 0 && aluno0 == 0)
						{
							zero++;
							aluno0++;	
						}
					}
				}
				printf("%d alunos tiveram pelo menos uma nota zero.", zero);
							
				break;
				
		}
	}while (rep == 1);
}
