#include<stdio.h>
void main()
{
	int ar[5], i, j, max = -5;
	printf("Enter element in array:");
	for(i = 0; i < 5; i++)
	scanf("%d", &ar[i]);
	
	for(i = 0; i < 5; i++)
	{
		if( max >< ar[i] )
		{
			max = ar[i];
		}
	}
	
	printf("maximum value is: %d", max);
}
