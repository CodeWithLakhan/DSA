#include<iostream>
using namespace std;
int main()
{
    int n; //num of elements in array
    cin>>n;
    int arr[n]; //array
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    for(int j=n-1 ; j>0 ; j--)
    {
        for(int i=0;i<j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}