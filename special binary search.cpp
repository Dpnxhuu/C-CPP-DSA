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
int binarysearch(int arr[], int size,int  a)
{
    int i, middle = size/2;
    if(a>=middle)
    {
        for(i = middle; i < size; i++)
        {
            if(a == arr[i])
            break;
        }
        if(i == size) cout<<"data does not found";
        else cout<<"index:"<<i;
    }
    else if(a<=middle)
    {
        for(i = 1; i <= middle; i++)
        {
            if(arr[i] == a)
            break;
        }
        if(i == (middle+1)) cout<<"data does not found";
        else cout<<"index: "<<i;
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

    cout<<"Enter the number you want to search:"<<endl;
    cin>>a;
    binarysearch(arr,size,a);
}
