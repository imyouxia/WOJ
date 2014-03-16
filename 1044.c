#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[15];
	char b[15];
	while(scanf("%s %s",a,b) != EOF)
	{
		int i;
		int m = 0,n = 0;
		for(i = 0; a[i] != '\0'; i++)
		{
			if(a[i] <= '9' && a[i] >= '0')
				n = n * 10 + (a[i] - '0');
			else
				continue;
		}
		
		
		if(a[0] == '-')
			n = -n;
			

		for(i = 0; b[i] != '\0'; i++)
		{
			if(b[i] <= '9' && b[i] >= '0')
				m = m * 10 + (b[i] - '0');
			else
				continue;
		}
		if(b[0] == '-')
			m = -m;
		printf("%d\n",n+m);
		
	}

	return 0;
}

