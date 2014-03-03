#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		double k;
		double temp;
		scanf("%lf",&k);
		temp = k * 454;
		printf("%.2lf %.2lf\n",k,temp);
	
	}
	return 0;
}

