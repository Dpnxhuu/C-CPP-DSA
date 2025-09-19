#include<iostream>
using namespace std;
int prime(int a, int b)
{
    int i, j;    
    for(i = a; i < b; i++)
    {
      for(j = 2; j < i; j++)
      {
        if(i%j == 0)
        {
            break;
        }
      }
      if(i == j)
        {
            cout<<i<<endl;
        }
    }
    
}

int main()
{
    int a, b;
    cout<<"Enter number a  & b: ";
    cin>>a>>b;
    prime(a,b);
}
