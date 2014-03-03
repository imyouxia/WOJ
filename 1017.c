#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	double total = 0;
	double temp = 1;
	int i;
	for(i = 1; i <= nCount; i++)
	{
		temp = temp * ((double)1 / (i*2-1)) *( (double)1 / (2*i));
		total = total + temp;
	}
	printf("%.6lf\n",total);
	return 0;
}
