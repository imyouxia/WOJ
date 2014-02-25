#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a == 0)
		{
			printf("YES\n");
		}
		else if(b == 0)
		{
			printf("UNKNOWN\n");
		}
		else
		{
			if(a%b)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
		}
	}
	return 0;
}
