#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M,N;
	while(scanf("%d %d",&M,&N) == 2)
	{
		int **p;
		int i,j;
		p = (int **)malloc(sizeof(int *) * M);
		for(i = 0; i < M; i++)
		{
			*(p + i) = (int *)malloc(sizeof(int ) * N);
		}

		for(i = 0; i < M; i++)
		{
			for(j = 0; j < N; j++)
			{
				scanf("%d",&*(*(p+i)+j));
			}
		}

		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				printf("%d ",*(*(p+j)+i));
			}
			printf("\n");
		}

		for(i = 0; i < M; i++)
		{
			free(*(p+i));
		}

		free(p);
	}
	return 0;
}

