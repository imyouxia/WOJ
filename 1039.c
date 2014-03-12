#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char *str,char *in,int len)
{

	char *p;
	//int len2 = 0;
	int count = 0;

	while((p = strstr(str,in)) != NULL)
	{
		count++;
		str = p + len;
	}

	printf("%d\n",count);
	return 0;
}

int main()
{
	int nCase;
	scanf("%d",&nCase);
	getchar();
	char a[nCase][11];
	char str[1001];
	int i;
	int len;
	for(i = 0; i < nCase; i++)
	{
		gets(a[i]);
	}
	gets(str);
	

	for(i = 0; i < nCase; i++)
	{
		len = strlen(a[i]);
//		printf("%d\n",len1);
		search(str,a[i],len);
	}
	
	return 0;
}

