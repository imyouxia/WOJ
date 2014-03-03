#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		double kilo;
		scanf("%lf",&kilo);
		double temp;
		temp = (kilo * 5280 * 12 * 2.54) / 100000;
		printf("%.2lf\n",temp);
	}
	return 0;
}

