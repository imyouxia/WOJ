#include <stdio.h>
#include <stdlib.h>

int data[20000];

int binary_search(int d[],int s,int e,int q)
{
	int begin = s;
	int end = e - 1;
	while(begin <= end)
	{
		int mid = (begin+end)/2;
		if(q == d[mid]) return mid;
		else if(q < d[mid]) end = mid - 1;
		else begin = mid +1;
	}
	return -1;
}

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&data[i]);
	}

	int m;
	scanf("%d",&m);
	while(m-- > 0)
	{
		int s,e,q;
		scanf("%d %d %d",&s,&e,&q);
		int value;
		value =binary_search(data,s,e,q);
		printf("%d\n",value);
	}
	return 0;
}
