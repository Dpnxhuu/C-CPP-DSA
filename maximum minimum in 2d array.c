// 					FINDING MAXIMUM MINIMUM IN 2D ARRAY
#include <stdio.h>
#include <limits.h>
void main()
{
	int r, c, i, j;

	printf("enter row: ");
	scanf("%d", &r);
	printf("enter colomn: ");
	scanf("%d", &c);
	int  ar[r][c];
	printf("Enter element in ar: \n");
	for(i = 0; i < r; i++)
	{
		for( j = 0; j < c; j++)
		{
			 scanf("%d",&ar[i][j]);
		}
	}
	
	int max = INT_MIN, a , b;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (max < ar[i][j])
			{
				max = ar[i][j];
				a = i;
				b = j;
			}
		}
	}
	printf("maximum value is: %d at the position (%d,%d)\n", max,a,b);
	
	int min = INT_MAX;
		for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (min > ar[i][j])
			{
				min = ar[i][j];
				a = i;
				b = j;
			}
		}
	}
	printf("minimum value is: %d at the position (%d,%d)", min,a,b);
	
}

