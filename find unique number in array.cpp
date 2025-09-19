#include<iostream>
using namespace std;
int main()
{
  int size; 
  cout << " Enter size: " << endl;
  cin >> size;
  int arr[size];
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int ans = 0;
  for(int i = 0; i < size; i++)
  {
    ans = ans^arr[i];
  }

  cout << "Non repeating number is: " << ans << endl; 
}
