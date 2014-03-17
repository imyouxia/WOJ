#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	//scanf("%d",&N);
	while(~scanf("%d",&N))
	{
		int i,j;
		for(i = 1; i <= N; i++)
		{
			int space;
			space = abs(4*N+1 - (4*i-3)) / 2;
			for(j = 0; j < space; j++)
			{
				printf(" ");
			}
			for(j = 0; j < 4*i - 3; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		for(i = 0; i < 4*N+1; i++)
		{
			printf("*");
		}
		printf("\n");

		for(i = N; i >= 1; i--)
		{
			int space = abs(4*N+1 - (4*i - 3)) / 2;
			for(j = 0; j < space; j++)
			{
				printf(" ");
			}

			for(j = 0; j < 4*i - 3; j++)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}

