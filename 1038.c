#include <stdio.h>
#include <stdlib.h>

int insertsort(int num[],int n)
{
	int i,j;
	int temp;
	for(i = 1; i < n; i++)
	{
		temp = num[i];
		j = i - 1;
		while(j >= 0 && temp < num[j])
		{
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = temp;

	}

	for(i = 0; i < n; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int nCase;
	scanf("%d",&nCase);
	int num[1024];
	while(nCase-- > 0)
	{
		int n,i;
		scanf("%d",&n);
		for(i = 0; i < n; i++)
		{
			scanf("%d",&num[i]);
		}
		insertsort(num,n);
	}
	return 0;
}

