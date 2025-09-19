#include <iostream>
using namespace std;
int main()
{
    int i, j, n, space;
    cin >> n;
    int x =n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (space = n - i; space >= 1; space--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = x; j >= 1; j--)
        {
            cout << "*";
        }
        for (space = 1; space <= i-1 ; space++)
        {
            cout << "  ";
        }
        for (j = x; j >= 1; j--)
        {
            cout << "*";
        }
        x--;
        cout << endl;
    }
}
