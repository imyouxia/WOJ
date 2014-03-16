#include <stdio.h>
#include <stdlib.h>

int n[110];

int reverse(int n[],int nCase,int begin)
{
	if(begin == nCase)
	{	
		printf("%d",n[nCase]);
		printf(" ");
		return 0;
	}

	reverse(n,nCase,begin+1);
	printf("%d",n[begin]);
	printf(" ");
	return 0;
}

int main()
{
	int i,nCase;
	scanf("%d",&nCase);
	for(i = 0; i < nCase; i++)
	{
		scanf("%d",&n[i]);
	}

	int begin = 0;
	reverse(n,nCase - 1,begin);
	printf("\n");
	return 0;
}

