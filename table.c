#include<stdio.h>
int table(int n);
void main()
{
	int n; 
	
	printf("enter any number:");
	scanf("%d",&n);
	
	table(n);
}

int table(int n)
{
	int i, table; 
	
	for(i = 1; i<= 10; i++)
	{
	  table = n*i;
	  printf("%d\n",table);
	}
}
