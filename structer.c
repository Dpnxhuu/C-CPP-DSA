#include<stdio.h>
#include<string.h>
void main()
{
	struct book{
		int pages;
		char name[20];
		float price;
	}marvel, english;
	
	marvel.pages = 200;
	strcpy(marvel.name,"Deepanshu");
	marvel.price = 250.65;
	
	printf("%d\n%s\n%f",marvel.pages, marvel.name, marvel.price);
}
