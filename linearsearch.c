//                     			LINEAR SEARCHING IN ARRAY

#include<stdio.h>
void linearsearch(int ar[],int,int);
void main()
{
	int size, i, a;
	
	 printf("enter size of array:");
     scanf("%d",&size);
     
     int ar[size];
	
	printf("Enter element in array =");
	for(i = 0; i < size; i++) scanf("%d",&ar[i]);

	printf("enter that element you want to search = ");
	scanf("%d",&a);
	
	linearsearch(ar, size, a);
}

void linearsearch(int ar[], int size, int a)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(ar[i] == a)
		{
			printf("Milgya\n");
			break;
		}
	}
	if(i == size) printf("Data does not exist");
	else printf("Data exist at %d position", i);
}
