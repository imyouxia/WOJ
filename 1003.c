#include <stdio.h>
#include <stdlib.h>

int main()
{
	double inches = 0.393700787;
	double feet = 0.032808399;
	
	double num;
	scanf("%lf",&num);
	printf("%.4lf %.4lf\n",inches*num,feet*num);
	return 0;
}
