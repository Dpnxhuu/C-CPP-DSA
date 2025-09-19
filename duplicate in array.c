//					FIND DUPLICATE NUMBER IN ARRAY
#include<stdio.h>
void main()
{
    int size, i, j, a = 0, count = 0 ;
    
     printf("enter size of array:");
     scanf("%d",&size);
     
     int ar[size];
     
    printf("Enter element in array=\n");
    for(i = 0; i < size; i++) scanf("%d", &ar[i]);

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
