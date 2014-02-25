#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCase;
	scanf("%d",&nCase);

	while(nCase-- > 0)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(b == 0)
		{
			printf("%d %d %d %d %d\n",a+b,a*b,a-b,-1,-1);
		}
		else
		{
			printf("%d %d %d %d %d\n",a+b,a*b,a-b,a/b,a%b);
		}
	}
	return 0;
}
