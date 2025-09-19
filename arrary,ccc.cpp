#include<stdio.h>
void linearsearch(int *,int,int);
void main()
{
	int ar[5], size = 5; i, a;
	
	printf("Enter element in array =");
	for(i = 0; i < size; i++) scanf("%d",&ar[i]);
	
	printf("Entered elements = \n");
	for(i = 0; i < size; i++) printf("%d\n", ar[i]);
	
	printf("enter that element you want to search = ");
	scanf("%d",&a);
	
	linearsearch(ar, size, a);
}

void linearsearch(int *ar, int size, int a)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(i == a)
		break;
	}
	if(i == size) printf("Data does not exist");
	else printf("Data exist at %d position", i);
}
