//Insertion Sort
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter  no. of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"element: ";
        cin>>arr[i];
    }
    int cur;
    for(int i=1;i<n;i++)
    {
        cur = arr[i];
        int j = i-1;
        while(arr[j]>cur && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
