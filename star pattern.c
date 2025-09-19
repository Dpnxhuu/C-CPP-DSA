					 // Program to print star pattern in c
#include<stdio.h>
#include<string.h>
void main()
{
	int i , j, space, n;
	char value[100];
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++) 
	{
		for( space = 1; space <= (n-i); space++)
		printf(" ");
		
		for(j = 1; j <= i; j++ )
		printf("* ");
		
		printf("\n");
	}
}
