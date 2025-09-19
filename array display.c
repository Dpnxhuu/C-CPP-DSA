#include<stdio.h>
void display(int ar[], int n)
{
   int i; 
   for(i = 0; i < n; i ++ )
   printf("%d ",ar[i]);

}
void main()
{
   int n, ar[n], i;

   printf("Enter array size:\n") ;
   scanf("%d", &n);

   for(i = 0; i < n; i++)
   scanf("%d", &ar[i]);

   display(ar,n);
}
