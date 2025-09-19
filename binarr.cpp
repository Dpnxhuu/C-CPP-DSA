#include<bits/stdc++.h>
using namespace std;
int main(){

 int size; 
 cout <<"Enter size: ";
 cin >> size;
  vector<int> ar;
  int i = 0;
  while(size--)
  {
    int n;
    cin >> n;
    ar.push_back(n);
    i++;
  }
  int key;
  cout << "Enter the element you want to search: ";
  cin >> key;
  int lb = 0;
  int ub = ar.size() - 1;
  int mid = (lb + ub)/2;

  while(lb < ub)
  {
    if(key == ar[mid])
    {
      cout << mid << endl;
      return mid;
    }
    else if(key < ar[mid])
    {
      ub = mid;
      mid = (lb + ub) / 2;
    }
    else if(key > ar[mid])
    {
      lb = mid;
      mid = (lb + ub) / 2;
    }
  }
  cout <<"Data not found" << endl;
}
