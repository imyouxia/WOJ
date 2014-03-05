#include <stdio.h>
#include <stdlib.h>


int k(int i,int number)
{
	return  2*i*i*i - 4*i*i + 3*i - 6 - number;	
	
}

int main()
{
	int nCount;
	scanf("%d",&nCount);

	while(nCount-- > 0)
	{
		int number;
		scanf("%d",&number);
		int i;
		for(i = -10; i <= 10; i++)
		{
			if(k(i,number) == 0)
			{
				printf("%d\n",i);
				break;
			}
			else
				if(k(i,number) != 0 && i == 10)
				{
					printf("NULL\n");
				}
		}
	
	}
	return 0;
}
