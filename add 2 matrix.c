//					Add two matrix in 2d array
#include<stdio.h>
void main()
{
	int row, colomn, i , j ;

	printf("enter the number of row: ");
	scanf("%d",&row);

	printf("enter the number of colomn: ");
	scanf("%d",&colomn);

	int ar[row][colomn];
    printf("Enter element in ar: \n");
	for(i = 0; i < row; i++)
	{
		for( j = 0; j < colomn; j++)
		{
			 scanf("%d",&ar[i][j]);
		}
	}
	
    int br[row][colomn];
    printf("Enter element in br:\n");
	for( i = 0; i < row; i++)
	{
		for( j = 0; j < colomn; j++)
		{
			 scanf("%d",&br[i][j]);
		}
	}
	
	printf("your matrix is ready:-\n");

	for( i = 0; i < row; i++)
	{
		for( j = 0; j < colomn; j++)
		{
			printf("%d ", ar[i][j]+br[i][j]);
		}
		printf("\n");
	}

}
