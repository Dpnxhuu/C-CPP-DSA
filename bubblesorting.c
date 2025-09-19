//   					BUBBLE SORTING
#include<stdio.h>
void bubblesort(int ar[], int n)
{
	int i, j, a = 0;
	for(i = 0; i <= n; i++)
	{
		for(j = i+1; j <= n; j++)
		{
			if(ar[i] > ar[j])
		  {
			a		=	ar[i];
			ar[i]	=	ar[j];
			ar[j]	=	a;
		  } 
		}
	}
		printf("after sorting\n");
		for(i = 0; i <= n; i++)
		printf("%d ", ar[i]);
}
void main()
{
	int n, i;
	
	 printf("enter size of array:");
     scanf("%d",&n);
     
     int ar[n];
	
	printf("Enter element in array:\n");
	for(i = 0; i <= n; i++)
	scanf("%d",&ar[i]);
	 
	 bubblesort(ar,n);
}
