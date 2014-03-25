#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int p;
	double a,b; 
	while(scanf("%d %lf %lf",&p,&a,&b) == 3)
	{
		double precision = 1;
		int i;
		for(i = 0; i < p; i++)
		{
			precision *= 0.1;
		}

		if(fabs(a-b) < precision)
		{
			printf("0\n");
		}
		else if(a > b)
			printf("1\n");
		else
			printf("-1\n");

		
	}
	return 0;
}

