#include <iostream>
#include <math.h>
using namespace std;
int setbits(int a, int b)
{
    int counter = 0, count = 0, ans1 = 0, i = 0;
    bool bit = 0;
    while (a != 0)
    {
        bit = a & 1;
        ans1 = (bit * pow(10, i)) + ans1;
        a = a >> 1;
        i++;
    }
    int ans3 = 0;
    while (ans1 != 0)
    {
        ans3 = ans1 % 10;
        if (ans3 == 1)
            count++;
        ans1 = ans1 / 10;
    }

    i = 0;
    int ans2 = 0;
    while (b != 0)
    {
        bit = b & 1;
        ans2 = (bit * pow(10, i)) + ans2;
        b = b >> 1;
        i++;
    }
    while (ans2 != 0)
    {
        ans1 = ans2 % 10;
        if (ans1 == 1)
            count++;
        ans2 = ans2 / 10;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int bits = setbits(a, b);
    cout << bits << endl;
}

