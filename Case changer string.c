//					CHANGE THE CASE OF ENTERED STRING
#include<stdio.h>
#include<string.h>
void Casechanger(char str[],int);
void main()
{
	char str[100];
	puts("Enter string:");
	gets(str);
	int L;
	L = strlen(str);
	Casechanger(str,L);
}

void Casechanger(char str[], int L)
{
	int i;
	for(i = 0; i < L; i++)
	{
		if(str[i] > 64 && str[i] < 91)
		{
			printf("%c",str[i]+32);
		}
		else if(str[i] > 96 && str[i] < 123)
		{
				printf("%c",str[i]-32);
		}
	}
}
