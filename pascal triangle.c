#include<stdio.h>
void main()
{
	int i, j, space, n, value;
	printf("enter a number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(space = 1; space <= (n-i); space++)
		{
			printf("   ");
		}
		
		for(j = 1; j <= i; j++)
		{
			if( i == 1 || j == 1)
			{
			  value = 1;
			}
			else
			{ 
			 	value = value*(i-j+1)/(j-1);	
			}
			printf("%6d",value);
    	}
    		printf("\n");	
	}
}
