#include <stdio.h>
#include <stdlib.h>

int min(int num[],int nCase)
{
	int m;
	if(nCase == 1)
		return num[0];

	m = min(num,nCase-1);

	if(m < num[nCase-1])
		return m;
	else
		return num[nCase-1];	
}

int main()
{
	int nCase;
	int num[1000];

	scanf("%d",&nCase);
	int i;
	for(i = 0; i < nCase; i++)
	{
		scanf("%d",&num[i]);
	}
	int value;
	value = min(num,nCase);
	printf("%d\n",value);
	return 0;
}
