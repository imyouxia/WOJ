#include <stdio.h>
#include <stdlib.h>

int data[20000];

int binary_search(int d[],int s,int e,int q)
{
	int begin;
	int end;
	begin = s;
	end = e - 1;

	while(begin <= end)
	{
		int mid = (begin + end) / 2;
		if(d[mid] == q)
		{
			if(d[mid - 1] != q)
				return mid - s;
			else
				end = mid - 1;
		}
		else if(q < d[mid])
			end = mid - 1;
		else
			begin = mid + 1;
	}
	return begin - s;

}

int main()
{
	int i,N;
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	{
		scanf("%d",&data[i]);
	}

	int M;
	scanf("%d",&M);
	for(i = 0; i < M; i++)
	{
		int s,e,q;
		scanf("%d %d %d",&s,&e,&q);
		if(s >= e)
			printf("-1\n");
		else if(q <= data[s])
			printf("0\n");
		else if(q > data[e - 1])
			printf("%d\n",e-s);
		else
			printf("%d\n",binary_search(data,s,e,q));
	}	
	return 0;
}
