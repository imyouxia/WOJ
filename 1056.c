#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char value[1010];
	int len;
}BIGINT;

int add(BIGINT *first,BIGINT *second)
{
	int i;
	int pre = 0;
	for(i = 0; i < first->len; i++)
	{
		if(i < second->len)
		{
			first->value[first->len - 1 - i] = first->value[first->len - 1 - i] + second->value[second->len - 1 -i] + pre - '0';
		}
		else
		{
			first->value[first->len - 1 -i] += pre;
		}

		if(first->value[first->len - 1 - i] > '9')
		{
			first->value[first->len - 1 - i] -= 10;
			pre = 1;
		}
		else
			pre = 0;
	}
	return pre;
}

int main()
{
	int i;
	int nCase;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		BIGINT a,b;
		BIGINT *first = &a,*second = &b;
		scanf("%s %s",first->value,second->value);
		first->len = strlen(first->value);
		second->len = strlen(second->value);
		
		if(first->len < second->len)
		{
			first = &b;
			second = &a;
		}		

		if(add(first,second) == 1)
		{
			printf("1");
		}

		for(i = 0; i < first->len;i++)
		{
			printf("%c",first->value[i]);
		}
		printf("\n");
		
	}
	return 0;
}
