#include <bits/stdc++.h>
#include <array>
#include <vector>
using namespace std;
int main()
{
    int L = 15;
    vector<int> temp;
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == L)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                }
            }
        }
    }
    int x = 3;
    for (int i = 0; i < temp.size(); i++)
    {
        if (i == x)
        {
            cout << " = 15";
            cout << endl;
            x = x + 3;
        }
        cout << temp[i] << " ";
    }
}
