#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student
{
	int id;
	int score;
};

void findmax(struct student *stu,int *score,int *index)
{
	int i,max = 0;
	for(i = 0; i < 10; i++)
	{
		if((*(stu + max)).score < (*(stu + i)).score)
			max = i;
	}
	printf("%d %d\n",(*(stu + max)).id,(*(stu + max)).score);
}

void findmin(struct student *stu,int *score,int *index)
{
	int i,min = 0;
	for(i = 0; i < 10; i++)
	{
		if((*(stu + min)).score > (*(stu + i)).score)
			min = i;
	}
	printf("%d %d\n",(*(stu + min)).id,(*(stu + min)).score);
}

void findaver(struct student *stu,int *score,int *index)
{
	double mid = 0;
	int i;
	for(i = 0; i < 10; i++)
	{
		mid += (*(stu + i)).score;
	}
	mid = mid / 10;

	int avr = 0;
	for(i = 0; i < 10; i++)
	{
		if(fabs((*(stu + avr)).score - mid) > fabs((*(stu + i)).score - mid))
			avr = i;
	}
	printf("%d %d\n",(*(stu + avr)).id,(*(stu + avr)).score);
}

int main()
{
	int i;
	struct student *students;
	students = (struct student*)malloc(sizeof(struct student) * 100);
	for(i = 0; i < 10; i++)
	{
		scanf("%d %d",&(*(students + i)).id,&(*(students + i)).score);
	}

	findmax(students,NULL,NULL);
	findmin(students,NULL,NULL);
	findaver(students,NULL,NULL);

	free(students);
	return 0;
}



