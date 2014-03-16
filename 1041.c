#include <stdio.h>
#include <stdlib.h>

int findx(int d[],int n,int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(x == d[i])
		{
			return i;
		}
	}
	if(i == n)
	{
		return -1;
	}
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int num[1000];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&num[i]);
	}
	int x,y;
	scanf("%d",&x);
	y = findx(num,n,x);
	printf("%d\n",y);
	return 0;
}

