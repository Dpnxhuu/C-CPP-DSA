#include <iostream>
using namespace std;
int main()
{
  int size = 10;
  int arr[10];
  cout << "Enter value in array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < size; i = i + 2)
  {
    cout << "i = " << i << " ";

    for (int j = i+1; j <= i+1; j = j + 2)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      cout << "j=" << j << " ";
    }
    cout<<endl;
  }
  cout << "printing the array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
