#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strdiff(char *a,char *b)
{
	int i;
	int len = strlen(a);
	for(i = 0; i <= len; i++)
	{
		if(*(a+i) != *(b+i))
			return *(a+i) - *(b+i); 
	}
	return 0;

}

int main()
{
	char a[1010],b[1010];
	while(scanf("%s %s",a,b) == 2)
	{
		printf("%d\n",strdiff(a,b));
	}
	return 0;
}

