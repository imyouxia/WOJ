#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_space(char c)
{
	return (strchr(" \t\r\n",c) != NULL);
}

int shiganfu(const char *format, void *ptr)
{
	if(strcmp(format,"%d") == 0)
	{
		int d = 0,c;
		while(c=getchar(),c!=EOF && is_space(c));

		if(c == EOF)
		{
			return EOF;
		}
		if(!isdigit(c))
		{
			ungetc(c,stdin);
			return 0;
		}
		d = c - '0';
		while(c = getchar(),c!=EOF && isdigit(c))
		{
			d *= 10;
			d += c - '0';
		}
		if(c != EOF)
		{
			ungetc(c,stdin);
		}
		*(int *)ptr = d;
		return 1;
	}
	
	if(strcmp(format,"%c") == 0)
	{
		int c = getchar();
		//while(c=getchar(),c!=EOF && is_space(c));

		if(c == EOF)
			return EOF;
		*(char *)ptr = c;
		return 1;
	}

	if(strcmp(format,"%s") == 0)
	{
		int c;
		char *p = (char *)ptr;
		while(c = getchar(),c!=EOF)
		{
			if(strchr(" \t\r\n",c) == NULL)
				break;
		}
		
		if(c == EOF)
			return EOF;
		*p++ = c;
		while(c = getchar(),c!=EOF && !is_space(c))
		{
			*p++ = c;
		}
		*p = '\0';
		if(c != EOF)
			ungetc(c,stdin);
		return 1;
	}

	if(strcmp(format,"\\n") == 0)
	{
		int c;
		while(c = getchar(),c!=EOF && is_space(c));

		if(c!=EOF)
			ungetc(c,stdin);
		return 0;
	}

}

int main()
{
	char format[100];
	while(shiganfu("%s",format) == 1)
	{
		getchar();
		int ret;
		if(strcmp(format,"%d") == 0)
		{
			int d;
			ret = shiganfu(format,&d);
			printf("%d",ret);
			if(ret == 1)
				printf(" %d",d);
		}
		else if(strcmp(format,"%c") == 0)
		{
			int c;
			ret = shiganfu(format,&c);
			printf("%d",ret);
			if(ret == 1)
				printf(" %c",c);
		}
		else if(strcmp(format,"%s") == 0)
		{
			char s[110];
			ret = shiganfu(format,s);
			printf("%d",ret);
			if(ret == 1)
				printf(" %s",s);
		}
		else if(strcmp(format,"\\n") == 0)
		{
			shiganfu(format,NULL);
			printf("0");
		}
		printf("\n");
	}
	return 0;
}
