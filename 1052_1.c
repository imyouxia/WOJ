#include <stdio.h>
#include <stdlib.h>

void Permutation(char *pStr,char *pBegin);

void Per(char* pStr)
{
	Permutation(pStr,pStr);
}

void Permutation(char *pStr,char *pBegin)
{
	if(!pStr || !pBegin)
		return;
	
	if(*pBegin == '\0')
	{
		printf("%s\n",pStr);	
	}
	else
	{
		char *pCh;
		for(pCh = pBegin;*pCh != '\0'; ++pCh)
		{
			//swap pCh and pBegin
			char temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
			Permutation(pStr,pBegin + 1);

			//restore pCh and pBegin
			temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
 		}

	}
}

int main()
{
	char str[] = {'a','b','c','\0'};
	Per(str);
	return 0;

}

