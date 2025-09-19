#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> ar = {3,5,7,9,11,13,15,17};
  int key;
  cout << "Enter the element you want to search: ";
  cin >> key;
  int lb = 0;
  int ub = ar.size() - 1;
  int mid = (lb + ub)/2;

  while(lb <= ub)
  {
    if(key == ar[mid])
    {
      cout << mid << endl;
      return mid;
    }
    else if(key < ar[mid])
    {
      ub = mid-1;
    }
    else if(key > ar[mid])
    {
      lb = mid+1;
    }
    mid = (lb + ub)/2;
  }
  cout <<"Data not found" << endl;
}
