#include<stdio.h>
void linearsearch(int *ar, int size, int a);
void main()
{
	int ar[5], size=5, i, a;
	printf("Element  in array =\n");
	for(i = 0; i < size; i++)
	scanf("%d", &ar[i]);
	
	printf("\n Entered element in array =\n ");
	for(i = 0; i < size; i++)
	printf("%d\n", ar[i]);
	
	printf("\n Enter element you want to search = ");
	scanf("%d", &a);
	linearsearch(ar,size,a);
}

void linearsearch(int *ar, int size, int a)
{
	int i;
    for(i = 0; i < size; i++)
	{
    	if(ar[i]==a)	break;
	}
	if(i == size) printf("\n Data does not exist");
	else printf("\n Data exist at %d position",i);
}
