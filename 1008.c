#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len1;
	int len2;
	for(len1 = 0; len1 <= 7; len1++)
	{
		for(len2 = 0; len2 <= 7; len2++)
		{
			if(len1 % 2 == 0)
			{
				printf("*");
			}
			else
			{
				if (len2 == 0)
				{
					printf(" ");
					printf("*");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
