#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int data[1100];

int bubble(int data[],int len)
{
	int i,j;
	int temp;
	int count = 0;
	for(i = len; i > 1; i--)
	{
		for(j = 0; j < i - 1; j++)
		{
			if(data[j + 1] < data[j])
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}


int main()
{
	int n;
	while(scanf("%d",&n))
	{
		if(n == 0)
			break;

		int i;

		for(i = 0; i < n; i++)
		{
			scanf("%d",&data[i]);
		}
		

		bubble(data,n);
	}	
	return 0;
}

