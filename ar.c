#include <stdio.h>
void main()
{
   int ar[5], i;

   for(i = 0; i < 5; i++)
   scanf("%d", ar[i]);

   for(i = 0; i < 5; i++)
   {
    	if(35 > ar[i]) printf("his marks less than 35: --> %d\n", ar[i]);
   }
}

