//						transpose of matrix
#include <stdio.h> 
void main()
{
	int r, c, i, j;

	printf("enter row: ");
	scanf("%d", &r);
	printf("enter colomn: ");
	scanf("%d", &c);

	int ar[r][c];

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d ", ar[j][i]);
		}
		printf("\n");
	}
}

