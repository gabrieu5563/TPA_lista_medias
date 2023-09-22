#include<stdio.h>
int main()
{
	int c, l, zero, aluno0;
	float nota[4][3], menor[4][2]
	
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
}
