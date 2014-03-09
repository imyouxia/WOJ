#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count;
	int max = -32768;
	int min = 32767;
	int num = 0;
	while(1)
	{
		scanf("%d",&count);
		if(count == -1)
		{	
			printf("%d %d %d\n",num,max,min);
			break;
		}
		num++;
		max = count > max ? count : max;
	   	min = count < min ? count : min;	
	}
	return 0;
}

