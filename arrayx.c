#include<stdio.h>
void linearsearch(int *);
void main()
{
	int ar[5], size = 5, i, a;
	
	printf("Enter element in array =");
	for(i = 0; i < size; i++) scanf("%d",&ar[i]);
//	printf("address of entered element=");
//	scanf("%d",&a);
//	printf("%p", &ar[a]);
////	printf("Entered elements = \n");
//	for(i = 0; i < size; i++) printf("%d\n", ar[i]);
//	
//	printf("enter that element you want to search = ");
//	scanf("%d",&a);
	
	linearsearch(&ar[3]);
}

void linearsearch(int *ar)
{
	printf("%d",ar);
}
