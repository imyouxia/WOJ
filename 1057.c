#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
	return 2*pow(x,3) - 4*pow(x,2) + 3*x - 6;
}

int main()
{
	int y;
	while(~scanf("%d",&y))
	{
		double begin = -10000,end = 10000;
		double mid;
		if(f(begin) > y || f(end) < y)
		{
			printf("NULL\n");
		}
		else
		{
			while(fabs(end - begin) > 1e-6)
			{
				mid = (begin + end) / 2;
				double ans = f(mid);
				//printf("%.lf\n",ans);
				if(fabs(ans - y) < 1e-6)
					break;
				else if (ans > y)
					end = mid;
				else
					begin = mid;
				//printf("%.4lf\n",mid);
			}
		}
		printf("%.4lf\n",mid);
	}
	return 0;
}
