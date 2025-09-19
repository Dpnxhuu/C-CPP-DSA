//					FINGING MAXIMUM MINIMUM IN ARRAY

#include<stdio.h>
#include<limits.h>
void main()
{
	int size, i, j, max = INT_MIN, min = INT_MAX;  
   //INT_MIN = least number of integer, INT_MAX = Maximum value in integer
	
     printf("enter size of array:");
     scanf("%d",&size);
     
     int ar[size];
     
	printf("Enter element in array:");
	for(i = 0; i < size; i++)
	scanf("%d", &ar[i]);
	
	for(i = 0; i < size; i++)
	{
		if( max < ar[i] )
		{
			max = ar[i];
		}
	}	
	printf("maximum value is: %d\n", max);
	
	for(i = 0; i < size; i++)
	{
		if(min > ar[i] )
		min = ar[i];
	}
	printf("Minimum value is = %d", min);
}
