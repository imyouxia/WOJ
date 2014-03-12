#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substitute(char str[],char oldchar,char newchar)
{
	int i,count;
//  int j;	
//	j = strlen(str);
	count = 0;
	for(i = 0; i <= 1001; i++)
	{
		if(str[i] == '\0')
			break;
		else
		{
			if(str[i] == oldchar)
			{
				str[i] = newchar;
				count++;
			}
		}
	}
	return count;
}

int main()
{
	while(1)
	{
		char str[1001];
		char oldchar;
		char newchar;
		int n;
		while(scanf("%s %c %c",str,&oldchar,&newchar) == 3)
		{
			n = substitute(str,oldchar,newchar);
			printf("%d %s\n",n,str);
		}
	}
	return 0;
}
