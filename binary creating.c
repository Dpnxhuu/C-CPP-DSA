//						Program to get binnary of any number
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int rem, n,size1 = 0, size2, i, *ar;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	int b =n;
	
	while(n > 0)
	{
		rem = n%2;
		n   = n/2;
		size1++;
	}
	
	int br[size1];
	
	ar = (int*) malloc(size1*sizeof(int));
	
	size2 = size1;
	
	while(b > 0)
	{
		rem = b%2;
		b = b/2;
		br[ size2 -1] = rem;
		size2--;
	}
	
	for(i = 0; i < size1; i++)
	printf("%d ",br[i]);
}
