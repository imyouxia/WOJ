#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nCount;
	scanf("%d",&nCount);
	double count = 0;	
	while(nCount-- >0)
	{
		int a;
		double b;
		double price;

		scanf("%d %lf",&a,&b);
		switch(a)
		{
			case 1:
				price = 2.98;
				break;
			case 2:
				price = 4.50;
				break;
			case 3:
				price = 9.98;
				break;
			case 4:
				price = 4.49;
				break;
			case 5:
				price = 6.87;
				break;
			default:
				break;
		}
		count += price * b;
		//printf("%.2lf\n",count);
	
	}

	printf("%.2lf\n",count);
	return 0;
}	
