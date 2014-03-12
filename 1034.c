#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCase;
	scanf("%d",&nCase);
	
	while(nCase-- > 0)
	{
		int a[100];
		int i;
		int num;
		scanf("%d",&num);
		int len = 0;
		int j;
		for(i = 0; i < 100; i++)
		{
			if(num/2 == 0)
			{
				a[len] = num%2;
				break;
			}
			else
			{
				a[len] = num % 2;
				num/=2;
			}
			len++;
		}

		for(j = len; j >= 0; j--)
		{
			printf("%d",a[j]);
		}
		printf("\n");	
	}
	return 0;
}

