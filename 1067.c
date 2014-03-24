#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union{
	int i;
	unsigned char c[sizeof(int)];
}x;

int main()
{
	int len;
	while(scanf("%d",&x.i) == 1)
	{
		for(len = 0; len < sizeof(int); len++)
		{
				printf("%02X",x.c[len]);
		}
		printf("\n");
	}
	return 0;
}
