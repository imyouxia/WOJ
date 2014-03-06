#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(int x)
{
	return sqrt((double)(6*x + 2));
}

int main()
{
	int i;
	double sum = 0;

	for(i = 0; i <= 1000; i = i+50)
	{
		sum	+= f(i);
		printf("%.4lf %.4lf\n",f(i),sum);
	}
	return 0;
}

