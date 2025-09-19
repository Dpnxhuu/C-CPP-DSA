#include<bits/stdc++.h>
int main()
{
	struct book{
		int pages;
		char name[20];
		float price;
	}marvel, english;
	
	marvel.pages = 200;
	marvel.name = "Deepanshu";
	marvel.price = 250.65;
	
	printf("%d %s %f",marvel.pages, marvel.name, marvel.price);
}
