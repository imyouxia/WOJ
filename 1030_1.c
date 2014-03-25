#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,i;
	double a,b,c;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		printf("Case %d: ",i);
		if(fabs(a) <= 1e-7)
		{
			if(fabs(b) <= 1e-7)
				printf("NULL\n");
			else
			{
				printf("%.2lf\n",-c/b);
			}
		}
		else
		{
			if(b*b - 4*a*c < 0)
				printf("NULL\n");
			else if(b*b - 4*a*c == 0)
			{
				printf("%.2lf\n",-b/(2*a));
			}
			else
			{
				double tmp1 = (-b+sqrt(b*b-4*a*c))/(2*a);
				double tmp2 = (-b-sqrt(b*b-4*a*c))/(2*a);
				
				if(tmp1 > tmp2)
					printf("%.2lf %.2lf\n",tmp2,tmp1);
				else
					printf("%.2lf %.2lf\n",tmp1,tmp2);				
			}
		}

	}
	return 0;
}
