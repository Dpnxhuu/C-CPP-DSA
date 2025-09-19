#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    if(n == 0) return 14;
    fact = n*factorial(n-1);
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
} 
