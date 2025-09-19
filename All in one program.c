#include<stdio.h>
void bubblesorting(int ar[],int);						// function prototype
void linearsearch(int ar[],int,int);
void binarysearch(int ar[],int,int);
void duplicate(int ar[],int);

void main()                                                   // Main function
{
	int size , i , j , a ;
	
   printf("enter size of an array:");
   scanf("%d",&size);
   
   int ar[size];
	
	printf("enter element in array:-\n");
	for(i = 0; i < size ; i++)
	scanf("%d", &ar[i]);
	
	bubblesorting(ar,size);									// function calling
	
	printf("enter the element you want to search:-");
	scanf("%d", &a);
	
	linearsearch(ar, size, a);								// function callinG

	duplicate(ar,size);										//function calling
	
}

void bubblesorting(int ar[], int size)					//function defination
{
	int i , j , temp=0 ;
	
	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(ar[i] > ar[j])
			{
				temp	=	ar[i];
				ar[i]	=	ar[j];
				ar[j]	=	temp;	
			} 
			
		}
	}
	
	printf("after sorting:-\n");
	for(i = 0; i < size; i++) printf("%d ", ar[i]);
	printf("\n");
}

void linearsearch(int ar[], int size, int a)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(ar[i] == a)
		break;
	}
	if(i == size) printf("Data does not exist\n");
	else          printf("Data exist at %d position\n", i);
}

void binarysearch(int ar[],int size, int a)
{
	int low = 0, higher = size-1, mid ;
	
    start: mid = (low + higher)/2;
	
	if(a >= ar[low]  && a < ar[mid])
	{
		low = mid-1;
		goto start;
	}
	else if(a <= ar[higher] && a > ar[mid])
	{
		higher = mid+1;
		goto start;
	}
	else if(a == ar[mid]) printf("data found at %d position\n", mid);
	else                  printf("data does not found\n");
	
}
void duplicate(int ar[],int size)
{
		int i, j;

     for(i = 0; i < size; i++) 
     {
     	for(j = i+1; j < size; j++)
       {
       	 if(ar[i] == ar[j])
           {
             printf("ar[%d] = %d Repeated on position ar[%d] = %d\n",i,ar[i],j,ar[j]);
             break;
           }
	   }
	   
     }
}
