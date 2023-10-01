#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int c, l, ex, rep, inserido;
	float nota[5][3], media[4];
	rep=1;
	inserido=0;
	
	setlocale(LC_ALL,"");
	
	do{
		printf("1 - Preencher as notas\n");
		printf("2 - Preencher automaticamente as notas\n");
		printf("3 - Calcular as médias\n");
		printf("4 - Exibe as notas e médias\n");
		printf("5 - Calcular a média da sala e verificar quantos estão acima da média\n");
		printf("6 - Exibir quantos alunos tiraram ao menos um Zero\n");
		printf("\n");
		printf("0 - Encerrar o código\n");
		scanf("%d", &ex);
		
		switch (ex)
		{
			case 0:
				rep = 0;
				break;
				
			case 1:
				
				float verifnota;
				
				if(inserido == 0)
				{
					printf("\n");
					 for (l = 0 ; l < 5; l++)
			 		{
			 			printf("\n");
			 			printf("Aluno %d", l + 1);
			 			printf("\n\n");
			 			for (c = 0; c < 3; c++)
			 			{
			 				do {
                				printf("Nota %d: ", c + 1);
                				scanf("%f", &verifnota);
                				if (verifnota < 0 || verifnota > 10) {
                    				printf("\nNota inválida. Digite uma nota entre 0 e 10.\n ");
                				} else {
                    				nota[l][c] = verifnota;
                    				break;
                				}
            				} while (1);
						}
			 		}
			 	
			 		inserido = 1;
		 	
		 			printf("\nNotas adicionadas\n");
				} else {
					printf("Notas ja foram inseridas. Execute as opções 3, 4, 5 ou 6.");
				}
		 		
				system("pause");
				system("cls");
				break;
				
			case 2:
				
				if(inserido == 0)
				{
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
					nota[3][1]=4.3;
					nota[3][2]=7.6;
					
					nota[4][0]=6.7;
					nota[4][1]=3.5;
					nota[4][2]=9.5;
				
					inserido = 1;
					printf("\nNotas adicionadas\n");
				} else {
					printf("Notas ja foram inseridas. Execute as opções 3, 4, 5 ou 6.\n");
				}
	
				system("pause");
				system("cls");
				
				break;
				
			case 3:
				
				if(inserido == 0)
				{
					printf("\nNenhuma nota inserida. Execute a opcão 1 ou 2 primeiro.\n");
				} else {
					
					for(l = 0; l < 5; l++)
					{
						//printf("\n");
						float menor = nota[l][0];
						menor = nota[l][1] < menor? nota[l][1]: menor;
						menor = nota[l][2] < menor? nota[l][2]: menor;
						//printf("\n menor = %f", menor);
						media[l] = (nota[l][0] + nota[l][1] + nota[l][2] - menor) / 2;
						//printf("\nmedia = %f", media[l]);
					}
					
					printf("\nMédias calculadas\n");
					
					}
				
				system("pause");
				system("cls");
				
				break;
				
			case 4:
				
				if(inserido == 0)
				{
					printf("\nNenhuma nota inserida. Execute a opcão 1 ou 2 primeiro.\n");
				} else{
					
					for(l = 0; l < 5; l++)
					{
						printf("\n");
						printf("Aluno %d", l + 1);
						printf("\n\n");
						
						for(c = 0; c < 3; c++)
						{
							printf("Nota %d: %.2f\n", c + 1, nota[l][c]);
						}
						printf("Média: %.2f\n", media[l]);
					}
						
				}
				
				system("pause");
				system("cls");
				break;
				
			case 5:
				
				if(inserido == 0)
				{
					printf("\nNenhuma nota inserida. Execute a opcão 1 ou 2 primeiro.\n");
				} else{
					int maior, alunomaior;
					float mediasala;
					mediasala=(media[0] + media[1] + media[2] + media[3] + media[4])/5;
		
					for (l = 0; l < 5; l++)
					{
						alunomaior = 0;
						if(media[l] > mediasala && alunomaior == 0)
						{
							maior++;
							alunomaior++;
						}
					}
					printf("%d alunos ficaram acima da média da sala (%.2f).\n", maior, mediasala);	
				}
				
				system("pause");
				system("cls");
				break;
				
			case 6:
				
				if(inserido == 0)
				{
					printf("\nNenhuma nota inserida. Execute a opcão 1 ou 2 primeiro.\n");
				} else {
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
					printf("%d alunos tiveram pelo menos uma nota zero.\n", zero);	
				}
				
				system("pause");
				system("cls");
							
				break;
				
		}
	}while (rep == 1);
}
