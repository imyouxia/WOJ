#include <stdio.h>
#include <stdlib.h>

int a[1001];

int main()
{
	while(1)
	{
		int i,N;
		scanf("%d",&N);
		if(N == 0)
			break;
		for(i = 0; i < N; i++)
		{
			scanf("%d",&a[i]);
		}
		int score,count = 0;
		scanf("%d",&score);
		
		for(i = 0; i < N; i++)
		{
			
			if(score == a[i])
			{
				count++;
			}
			
		}
		printf("%d\n",count);
	}
	return 0;
}
