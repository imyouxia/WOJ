#include <stdio.h>
#include <stdlib.h>

int substitute(char *str,char oldchar,char newchar)
{	
	int i,count = 0;
	for(i = 0; i <= 1001; i++)
	{
		if(*(str + i) == '\0')
			break;
		else
		{
			if(*(str + i) == oldchar)
			{
				*(str + i) = newchar;
				count++;
			}
		
		}
	}
	return count;
}

int main()
{
	char *str = (char *)malloc(sizeof(char *) * 1001);
	char oldchar,newchar;
	int n;

	while(scanf("%s %c %c",str,&oldchar,&newchar) == 3)
	{
		n = substitute(str,oldchar,newchar);
		printf("%d %s\n",n,str);
	}
	return 0;
}

