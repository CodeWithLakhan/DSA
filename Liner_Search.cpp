//Linear Search
#include<iostream>
using namespace std;
int ls(int arr[],int e,int val)
{
    for(int i=0;i<e;i++)
    {
        if(arr[i]==val)
            return i;
    }
    return -1;
}
int main()
{
    cout<<"how many elements: ";
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cout<<"element: ";
        cin>>a[i];
    }
    cout<<"which? : ";
    int n;
    cin>>n;
    
    cout<<ls(a,x,n);
}
