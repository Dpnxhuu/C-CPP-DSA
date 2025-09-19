#include<stdio.h>
#include<limits.h>
void main()
{
	int ar[5], i, j, max = -5, smax = INT_MIN;
	printf("Enter element in array:");
	for(i = 0; i < 5; i++)
	scanf("%d", &ar[i]);
	
	for(i = 0; i < 5; i++)
	{
		if( max < ar[i] )
		{
			max = ar[i];
		}
	}	
	printf("maximum value is: %d\n", max);
	
	for(i = 0; i < 5; i++)
	{
		if(smax < ar[i] && ar[i] != max)
		smax = ar[i];
	}
	printf("smax = %d", smax);
}
