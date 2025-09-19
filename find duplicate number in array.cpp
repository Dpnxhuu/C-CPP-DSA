 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 int n; 
  cout << "enter size of array: ";
  cin >> n;
  int ar[n];
  for(int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }

  int q;
  cout << "Enter querries: ";
  cin >> q;
  while(q--)
  {
    int x;
    cout << "search number: ";
    cin >> x;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      if(ar[i] == x)
      {
        count++;
      }
    }
    cout <<"Repeat " << count << " times" << endl;
  }
}

