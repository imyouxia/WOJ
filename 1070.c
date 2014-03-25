#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c) == 3)
	{
		if((a+b > c) && (a+c>b) && (b+c>a))
		{
			if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
			{
				printf("right ");
			}
			else if((a*a+b*b<c*c) || (a*a+c*c < b*b) || (b*b+c*c < a*a))
			{
				printf("obtuse ");
			}
			else
			{
				printf("acute ");
			}

			if((a==b)&&(a==c))
			{
				printf("equilateral");
			}
			else if((a==b)||(b==c)||(a==c))
			{
				printf("isosceles");
			}
			else
			{
				printf("scalene");
			}
		}
		else
		{
			printf("not a triangle");
		}
		printf("\n");
	
	}
	return 0;
}

