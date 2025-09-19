#include<stdio.h>
void main()
{
   int ar[7], i, j, x = 12, count = 0,com =0;
   for( i = 0; i < 8; i ++)
   {
   	scanf("%d", &ar[i]);
   }
   
   for(i =0; i < 8; i++)
   {
   	 for(j = i+1; j < 8; i++)
   	 {
   	 	com = ar[i]+ar[j];
   	   if(com == 12)
   	    {
   	     	count++;	
	    }
     }
   }
   printf("\ncount = %d", count);
}
