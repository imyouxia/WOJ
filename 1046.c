#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[10],str2[1200];
	int len1,len2;

	while(fgets(str1,10,stdin) != NULL && str1[0] != '#')
	{
		int i,j;

		fgets(str2,1200,stdin);
		len1 = strlen(str1);
		len2 = strlen(str2);
		str1[len1 - 1] = '\0';
		str2[len2 - 1] = '\0';
	
		for(i = 0; i < len1 - 1; i++)
		{
			int total = 0;	
			for(j = 0; j < len2 - 1; j++)
			{
				if(str1[i] == str2[j])
				{
					total++;
				}	
			}
		//	printf("%d\n",total);
			printf("%c %d\n",str1[i],total);
		}
		
		memset(str1,0,sizeof(char) * len1);
		memset(str2,0,sizeof(char) * len2);

	}
	return 0;
}
