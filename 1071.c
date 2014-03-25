#include <stdio.h>
#include <stdlib.h>

void getnchar(char *str,int n)
{
	char c;
	int i;
	for(i = 0; ; i++)
	{
		c = getchar();
		if(c == '\n')
		{
			if(i < n)
				str[i] = '\0';
			break;
		}
		else if(i < n - 1)
			str[i] = c;
		else if(i == n - 1)
			str[i] = '\0';

	}

}

int my_strlen(char *str)
{
	int i;
	for(i = 0; str[i] != '\0'; i++);
	return i;
}

int my_strncat(char *dest,char *src,int n)
{
	int len1 = my_strlen(dest);
	int len2 = my_strlen(src);
	int len = len2 < n ? len2:n;

	int i;
	for(i = 0; i < len; i++)
	{
		dest[len1+i] = src[i];
	}
	dest[len1 + i] = '\0';
	return len;
}

int my_strspn(char *str,char *keys)
{
	int len1 = my_strlen(str);
	int len2 = my_strlen(keys);

	int i,j;
	for(i = 0; i < len1; i++)
	{
		for(j = 0; j < len2; j++)
		{
			if(str[i] == keys[j])
				break;
		}
		if(j == len2)
			return i;
	}
	return len1; 
}


int main()
{
	int nCase;
	int i,x;
	scanf("%d",&nCase);
	getchar();
	char a[500],b[500],c[500];
	
	for(i = 0; i < nCase; i++)
	{
		getnchar(a,110);
		getnchar(b,110);
		getnchar(c,110);
		
		scanf("%d",&x);
		getchar();
		printf("%d\n",my_strlen(a));
		printf("%d ",my_strncat(a,b,x));
		printf("%s\n",a);
		printf("%d\n",my_strspn(b,c));
	}
	return 0;
}

