//Selection sort
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
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp;
            temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
