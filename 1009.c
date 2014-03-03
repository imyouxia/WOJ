#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("number\tsquare\tcube\n");
	for(i = 0; i <= 10;i++)
	{
		printf("%d\t",i);
		printf("%d\t",i*i);
		printf("%d\n",i*i*i);
	}
	return 0;
}
