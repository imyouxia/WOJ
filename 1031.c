#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sale;
//	int sum;
	while(1)
	{
		scanf("%d",&sale);
		if(sale == -1)
			break;
		
		printf("%d\n",(int)(200 + sale*0.09+0.5));
	}
	return 0;
}
