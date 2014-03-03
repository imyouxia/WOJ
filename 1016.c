#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		int score;
		scanf("%d",&score);
		if(score > 100 || score <= -1)
			printf("X\n");
		else
		{
			switch(score / 10 )
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					printf("E\n");
					break;
				case 6:
					printf("D\n");
					break;
				case 7:
					printf("C\n");
					break;
				case 8:
					printf("B\n");
					break;
				case 9:
					printf("A\n");
					break;
				case 10:
					printf("A\n");
				default:
					break;
			}
	
		}
	}
	return 0;
}
