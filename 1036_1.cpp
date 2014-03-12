#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int substitute(char str[], char oldchar, char newchar)
{
	int count=0;
	for(int i=0;i<1001;i++)
	{
		if('\0'==str[i]) break;
		if(oldchar==str[i])
		{
			str[i]=newchar;
			count++;
		}
	}
	return count;
}

int main()
{
	char str[1001];
	char oldchar,newchar;
	while(scanf("%s %c %c",str,&oldchar,&newchar)==3)
	{
		cout<<substitute(str,oldchar,newchar);
		printf(" %s\n",str);
	}
	return 0;
}
