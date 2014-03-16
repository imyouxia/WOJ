#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M,N;
	while(1)
	{
			
		scanf("%d",&M);
		if(M == 0)
			break;
		scanf("%d",&N);
		int a[M][N];
		int i,j,b;
		for(i = 0; i < M; i++)
			for(j = 0; j < N; j++)
			{
				scanf("%d",&a[i][j]);
			}

		for(i = 0; i < M; i++)
			for(j = 0; j < N; j++)
			{
				scanf("%d",&b);
				a[i][j] += b;
			}
		
		int count = 0;

		for(i = 0; i < M; i++)
		{	
			for(j = 0; j < N; j++)
			{
				if(a[i][j] != 0)
					break;
			}
			if(j == N)
				count++;
		}
	
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				if(a[j][i] != 0)
					break;
			}
			if(M == j)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

