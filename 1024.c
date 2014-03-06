#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 0;

int flip()
{
	int i;
	int a;
	srand((unsigned) time(0));
	for(i = 0; i < 100; i++)
	{
		a = rand() % 2;
		if(a == 1)
		{
			count++;
		}
		printf("%d ",a);
	}
	
	return count;

}

int main()
{
	flip();
	printf("\n");
	printf("%d %d\n",count,100-count);
	return 0;
}

