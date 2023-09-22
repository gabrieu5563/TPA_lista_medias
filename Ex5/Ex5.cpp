#include<stdio.h>
int main()
{
	int c, l, maior;
	float nota[4][3], medias;
	
	medias=(nota[0][3]+nota[1][3]+nota[2][3]+nota[3][3]+nota[4][3])/5;
	
	for (l = 0; l < 5; l++)
	{
		if(nota[l][3] > medias)
		{
			maior++;
		}
	}
	printf("%d alunos ficaram acima da media da sala.", maior);
}
