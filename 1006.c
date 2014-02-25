#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		int a;
		scanf("%d",&a);
		if(a%2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}
	return 0;
}
