#include <stdio.h>
#include <stdlib.h>

void fun(int N)
{
	if(N == 0)
		return;
	int i;
	scanf("%d",&i);
	fun(N-1);
	printf("%d",i);
	printf(" ");
}

int main()
{
	int N;
	scanf("%d",&N);
	fun(N);
	return 0;
}

