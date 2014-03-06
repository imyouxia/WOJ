#include <stdio.h>
#include <stdlib.h>

int change(int n)
{
//	int i = n / 7;
	if(n == 0)
	{
		return 0;
	}
	change(n / 7);
	

	printf("%d",n%7);
	return 0;
}

int main()
{
	int nCase;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		int n;
		scanf("%d",&n);
		if(n == 0)
		{
			printf("0");
		}
		else
		{
			change(n);
		}
		printf("\n");
	}
	return 0;
}


