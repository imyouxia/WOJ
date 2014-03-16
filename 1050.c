#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;

	while(~scanf("%d",&N))
	{
		int i;
		for(i=0;i<=100;i++)
		{
			if(i*5>N) 
				break;
			int j;
			for(j=0;j<=100-i;j++)
			{
				if(i*5+j*3>N) 
					break;
				if(i*5+j*3+(100-i-j)*0.33333<=N)
					printf("x=%d,y=%d,z=%d\n",i,j,100-i-j);
			}
		}
	}
	return 0;
}
