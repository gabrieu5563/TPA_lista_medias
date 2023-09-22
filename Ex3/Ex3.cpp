#include<stdio.h>
int main()
{
	int c, l, menor;
	float nota[0][3], maior[0][2];
	
	nota[0][0]=2;
	nota[0][1]=7;
	nota[0][2]=9;
	
	for (l = 0; l<5; l++)
	{
		if (nota[l][0] < nota[l][1] && nota[l][0] < nota[l][2]){
			menor=0;
		}
		else{
			if(nota[l][1] < nota[l][2]){
				menor=1;
			}
			else{
				menor=2;
			}
		}
		printf("%d\n", menor);
	}
}
