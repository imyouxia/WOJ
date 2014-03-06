#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int time_elapse(int hour,int minute,int second)
{
	return 3600*hour + 60 * minute + second;
}


int main()
{
	int nCount;
	scanf("%d",&nCount);
	int temp1,temp2;
	while(nCount -- >0)
	{
		int hour1,minute1,second1;
		int hour2,minute2,second2;
		scanf("%d:%d:%d",&hour1,&minute1,&second1);
		scanf("%d:%d:%d",&hour2,&minute2,&second2);
		temp1 = time_elapse(hour1,minute1,second1);
		temp2 = time_elapse(hour2,minute2,second2);
		printf("%d %d %d\n",temp1,temp2,abs(temp1-temp2));
	}	
	return 0;
}

