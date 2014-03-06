#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int nCase;
	scanf("%d",&nCase);

	int num = 0;
	while(nCase-- > 0)
	{
		num++;
		
		int a,b,c;
		int disc;
		double x,y;
		scanf("%d %d %d",&a,&b,&c);
		printf("Case %d: ",num);
		
		if (a == 0)
		{
			if(b == 0)
			{
				printf("NULL\n");
			}
			else
			{
				printf("%.2lf\n",(double)-(c/b));
			}

		}
		else
		{
			disc = b*b - 4*a*c;
			if(disc < 0)
			{
				printf("NULL\n");
			}

			else if(disc == 0)
			{
				printf("%.2lf\n",(double)-b/(2*a));
			}
			
			else
			{
				x = -((b + sqrt(disc)) / (2*a));
			   	y = -((b - sqrt(disc)) / (2*a));
				if(x - y > 0)
				{
					printf("%.2lf %.2lf\n",y,x);
				}
				else
				{
					printf("%.2lf %.2lf\n",x,y);
				}
			}
		
		}
	}

	return 0;
}
