#include <stdio.h>
#include <stdlib.h>

int all()
{
	char i,j,k;
	for(i='X';i<='Z';i++)
		for(j='X';j<='Z';j++)
		if(i!=j)
			{ 
				for(k='X';k<='Z';k++)
				{ 
					if(i!=k&&j!=k)
					{
						printf("A %c\nB %c\nC %c\n",i,j,k);
						
					}
				
				}
			}
	return 0;


}

int result()
{
	char i,j,k;
	for(i='X';i<='Z';i++)
		for(j='X';j<='Z';j++)
		if(i!=j)
			{ 
				for(k='X';k<='Z';k++)
				{ 
					if(i!=k&&j!=k)
					{
						
						if(i!='X'&&k!='X'&&k!='Z')
						printf("A %c\nB %c\nC %c\n",i,j,k);
						
					}
				
				}
			}
	return 0;


}
int main()
{
	all();
	result();
	return 0;
}
