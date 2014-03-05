/* 递归法：
 * 到第n天早上再想吃时，只剩下一个桃子了，可知total(n-1) = 1，那么total(n-2) = (total(n-1) + 1) *2
 */

#include <stdio.h>
#include <stdlib.h>

int total(int day,int n)
{
	int sum;
	if(day == n)
		sum = 1;
	else
		if(day < n)
			sum = 2*(total(day + 1,n) + 1);
	return sum;
}

int main()
{
	int sum;
	int n;
	scanf("%d",&n);
	sum = total(1,n);
	printf("%d\n",sum);
	return 0;
}
