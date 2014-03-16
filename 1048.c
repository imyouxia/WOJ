#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[110];

int main()
{
	while(1)
	{
		gets(a);
		if(a[0] == 'E')
			break;
		int i,len;
		
		int Z = 0, O = 0, J = 0;

		len = strlen(a);
		for(i = 0; i < len; i++)
		{
			if(a[i] == 'Z')
				Z++;
			else if(a[i] == 'O')
				O++;
			else if(a[i] == 'J')
				J++;	
		}

		while(Z > 0 || O > 0 || J > 0)
		{
			if(Z > 0)
				printf("Z");
			if(O > 0)
				printf("O");
			if(J > 0)
				printf("J");
			Z--;
			O--;
			J--;

		}
		printf("\n");
	}
	return 0;
}
