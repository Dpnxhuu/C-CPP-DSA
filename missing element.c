#include<stdio.h>
void main()
{
	int n=100, ar[n], i, sA = 0, sN = 0, b =1;
	
	for(i = 0; i < 99; i++)
	{
        ar[i] = b;
		b++;
    }
	
	for(i = 0; i < 99; i++)
	{
		sA = sA + ar[i];
	}
	
	printf("%d\n ", sA);
	
	sN = n*(n+1)/2;

	printf("missing number is: %d", sN-sA);
}
