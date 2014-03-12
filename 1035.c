#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCase;
	scanf("%d",&nCase);

	int a[100];
	char str[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	while(nCase-- > 0)
	{
		int num,bin;
		scanf("%d %d",&num,&bin);
		int count;
		int len = 0;
		int j;
		for(count = 0; count < 100; count++)
		{
			if(num / bin == 0)
			{
				a[len] = num % bin;
				break;
			}
			else
			{
				a[len] = num % bin;
				num = num / bin;
			}
			len++;
		}

		for(j = len; j >= 0; j--)
		{
			printf("%c",str[a[j]]);
		}
		printf("\n");
	}
	return 0;
}

