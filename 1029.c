#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double sum(n)
{
	double t = 1;
	double total = 1;
	int i;
	for(i = 1; i <= n; i++)
	{
		t = t * 1/(i);
		total = total + t;
	}
	return total;
}

int main()
{
	int n = 2;
	double a = sum(1);
	double b = sum(2);

	while(fabs(b - a) > 1e-15)
	{
		n++;
		a = sum(n-1);
		b = sum(n);
	
	}	
	printf("%.14lf\n",sum(n));
	return 0;
}


