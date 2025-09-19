#include<stdio.h>
void main()
{
	int i,j, arr[2][4]= {1,2,3,4,5,6,7,8}, brr[2][4]={9,10,11,12,13,14,15,16}, crr[2][4];
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 4; j++)
		{
			crr[i][j] = arr[i][j] + brr[i][j];
		}
	}
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 4; j++)
	    printf("%d ",crr[i][j]);
	    
	    printf("\n");
	}
    
}
