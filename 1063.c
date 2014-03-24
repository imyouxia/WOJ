#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *findstr(char *s,char *t)
{
	int end,i,j;
	int a = strlen(s);
	int b = strlen(t);
	end = a - b;
	for(i = 0; i <= end; i++)
	{
		for(j = 0; j < b; j++)
		{
			if(*(s + i + j) != *(t + j))
				break;
		}

		if(b == j)
			return s + i;
	}
	
	return NULL;
}

int main()
{
	char *s,*t;
	s = (char *)malloc(sizeof(char) * 1003);
	t = (char *)malloc(sizeof(char) * 1003);

	while(scanf("%s %s",s,t) == 2)
	{
		printf("%p %p\n",s,findstr(s,t));
	}
	return 0;

}


