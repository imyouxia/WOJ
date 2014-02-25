#include <stdio.h>
#include <stdlib.h>

#define  PI 3.1415926

int main()
{
	int nCount;
	scanf("%d",&nCount);
	while(nCount-- > 0)
	{
		double radius;
		scanf("%lf",&radius);
		printf("%.4lf %.4lf %.4lf\n",radius*2,2*PI*radius,PI*radius*radius);
	}
	return 0;
}

