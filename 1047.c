#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n == 0)
			break;
		
		int count = 0;

		while(n != 1)
		{
			if(n % 2 == 0) 
				n = n / 2;
			else
				n = (n * 3 + 1) / 2;
			//printf("%d\n",n);
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

