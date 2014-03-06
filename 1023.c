#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2)
{
	double temp1 = pow((x1-x2),2);
	double temp2 = pow((y1-y2),2);
	return sqrt(temp1 + temp2);

}

int main()
{
	int nCount;
	scanf("%d",&nCount);

	while(nCount-- > 0)
	{
		double x1,y1,x2,y2;
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		
		printf("%.4lf\n",distance(x1,y1,x2,y2));
	}
	
	return 0;
}
