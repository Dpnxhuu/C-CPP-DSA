#include<stdio.h>
void main()
{
	int ar[5], n=5, i, a = 0, j,Sn;
    printf("Enter element in array=\n");
    for(i = 0; i < n; i++) scanf("%d", &ar[i]);
    
    for(i = 0; i < n; i++)
    {
    	a = ar[i]+a;
	}
	
	Sn= n(n+1)/2;
	printf("%d is duplicate number\n",a-Sn);

}
