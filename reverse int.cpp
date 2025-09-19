#include<iostream>
using namespace std;
int main()
{
    int lastdigit = 0, n, reverse =0;
    cin >> n;
    while( n > 0)
    {
        lastdigit = n%10;
        reverse = (reverse * 10) + lastdigit;
        n = n/2;
    }
    cout<<reverse<<endl;
}
