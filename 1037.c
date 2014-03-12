#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students
{
	char name[128];
	char birthday[9];
	int num;
	char major[128];
};

struct students student[30];


int main()
{
	int i;

	for(i = 0; i < 30; i++)
	{
		scanf("%s %s %d %s",student[i].name,student[i].birthday,&student[i].num,student[i].major);
	}

	int nCase;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		int search;
		scanf("%d",&search);

		for(i = 0; i < 30; i++)
		{
			if(search == student[i].num)
			{
				printf("%s %s %d %s\n",student[i].name,student[i].birthday,student[i].num,student[i].major);
				break;
			}
		}
		if(i == 30)
		{
			printf("Not found\n");
		}
	}
	return 0;
}

