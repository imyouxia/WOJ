#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = {1,3,5,7,9,11,15,17,19};
	int *pt = arr;

	printf("%p\n",&arr[0]);
	printf("%p\n",&pt);
	printf("%p\n",pt);
	printf("%d\n",*pt);

	printf("%d\n",*pt + 3);
	printf("%d\n",pt[3]);
	printf("%p\n",&*pt);
	printf("%p\n",*&pt);
	//printf("%d\n",*pt[3]);
	printf("%d\n",*(pt + 3));
	printf("%d\n",*pt++);
	printf("%d\n",*(pt++));
	printf("%d\n",(*pt)++);
	printf("%d\n",++(*pt));
	return 0;
}





