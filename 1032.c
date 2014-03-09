#include <stdio.h>
#include <stdlib.h>

int main()
{
	int base,rate,day;

	while(1)
	{
		scanf("%d",&base);
		if(base == -1)
			break;
		scanf("%d",&rate);
		getchar();
		scanf("%d",&day);
		printf("%.2lf\n",(base*rate*day)/36500.0);	
	}
	return 0;	
}
