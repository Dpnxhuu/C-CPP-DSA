#include<iostream>
using namespace std;
int main()
{
  int i, j, n, space;  
  cin>>n;               // n = number of lines
  int nst = 1;          // nst = number of stars
  int nsp = n/2;        // nsp = number of space
  int ml = n/2+1;       // ml = middle line
  for(i = 1; i <= n; i++)
  {
    for(space = 1; space <= nsp; space++)
    {
      cout<<" ";
    }
    for(j = 1; j <=nst ; j++)
    {
      cout<<"*";
    }
    if(i < ml)
    {
      nsp--;
      nst+=2;
    }
    else 
    {
      nsp++;
      nst-=2;
    }
    cout<<endl;
  }
}

