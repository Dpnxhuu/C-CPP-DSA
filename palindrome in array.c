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
    
    printf("\n");;
}
void main()
{  
   int size, i;
   
   printf("enter size of an array:");
   scanf("%d",&size);
   
   int ar[size];
   
   for (i = 0; i < size; i++)
   scanf("%d", &ar[i]);
   
    int br[size];
    
   for( i = 0; i < size; i++)
   {
   	 br[i] = ar[i];
   }
   
    reverse(ar,size);
    int count = 0;
    for( i = 0; i < size; i++)
    {
    	if (br[i] == ar[i]) count++;					
	}
	
	if(count == size) printf("It is a palindrome number\n");
	else			  printf("It is not a palindrome number\n");
}
