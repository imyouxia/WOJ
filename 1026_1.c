#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	if (n == 0 || n ==1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n -2);
}

int main()
{
	int nCase;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		int T;
		scanf("%d",&T);
		printf("%d\n",fibonacci(T));
	}
	return 0;
}
