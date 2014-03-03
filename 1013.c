#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		double temp,temperature;
		scanf("%lf",&temp);
		temperature = ((temp - 32) * 5) / 9;
		printf("%.2lf\n",temperature);
	}
	return 0;
}

