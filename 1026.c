#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)  
{  
    int temp[2];  
    temp[0] = 1;  
    temp[1] = 1;  

    if (n == 0 || n == 1)  
    {  
        printf("1\n");  
    }  
    else  
    { 
	   	int i;	
        for (i = 2; i <= n; i ++)  
        {  
            int tp = temp[0] + temp[1];  
            temp[1] = temp[0];  
            temp[0] = tp;  
        }  
        printf("%d\n",temp[0]);  
    }  
}  


int main()
{
	int nCase;
	scanf("%d",&nCase);
	while(nCase-- > 0)
	{
		int n;
		scanf("%d",&n);
		fibonacci(n);
	}
	return 0;
}

