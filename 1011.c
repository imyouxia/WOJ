#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCase;
	int min;
	int max;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		max = (((a>b)?a:b)>c)?((a>b)?a:b):c;
		min = (((a<b)?a:b)<c)?((a<b)?a:b):c;
		printf("%d %.2f %d %d %d\n",(a+b+c),(a+b+c)/3.0,(a*b*c),min,max);
	}
	return 0;
}

