#include<iostream>
using namespace std;
int sorting(int size, int arr[])
{
    int i,j;
    int temp = 0;
    for(i = 0; i < size; i++ )
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"after sorting: "<<endl;
    for(i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int size, a, i;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter digit in array: "<<endl;
    for(i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sorting(size,arr);
}

