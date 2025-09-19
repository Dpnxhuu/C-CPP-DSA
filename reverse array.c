					// program to reverse an array elements
#include <stdio.h>
void reverse(int ar[], int size)
{
	int temp;
	int i = 0;
	int j = size - 1 ;
	
	while(i<=j)
	{
		temp 	=  ar[i];
		ar[i]	=	ar[j];
		ar[j]	=	temp;
		i++;
		j--;
	}
	
	for (i = 0; i < size; i++)
    printf("%2d", ar[i]);
}
void main()
{  
   int size, i;
   
   printf("enter size of an array:");
   scanf("%d",&size);
   
   int ar[size];
   
   for (i = 0; i < size; i++)
   scanf("%d", &ar[i]);
	
	reverse(ar,size);
	
}
