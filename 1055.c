#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int key;
	int i;
	char str[120];
	
	while(~scanf("%s",str))
	{	
		scanf("%d",&key);

		for(i = 0; str[i]!= '\0'; i++)
		{	
			 str[i] = (str[i] - i -1 - key - 'A' + 26 * 26 * 26 * 26)%26 + 'A';	
		}
	
		printf("%s\n",str);
		memset(str,'\0',120);
	}
	return 0;
}
