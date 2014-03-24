#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
	double x,y;
}POINT;

typedef struct circle
{
	double m,n,r;
}CIRCLE;

int in_circle(POINT p,CIRCLE c)
{
	double s = sqrt(pow((p.x - c.m),2) + pow((p.y - c.n),2));
	if(fabs(c.r - s) < 1e-6)
		return 1;
	else if(c.r < s) return 0;
	else
		return 2;
}

int main()
{
	POINT p;
	CIRCLE c;
	while(scanf("%lf %lf %lf %lf %lf",&p.x,&p.y,&c.m,&c.n,&c.r) == 5)
	{
		printf("%d\n",in_circle(p,c));
	}
	return 0;	
}
