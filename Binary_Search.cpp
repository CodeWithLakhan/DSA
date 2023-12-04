//Binary Search
#include<iostream>
using namespace std;
int bs(int arr[], int l, int val)
{
    int s=0,e=l,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==val)
            return mid;
        else if (val < arr[mid])
            e = mid -1;
        else
            s = mid +1;
    }
    return -1;
}
int main()
{
    int l,r,pos=-1,x,i;
    cout<<"ENTER NO. OF ELEMENTS: ";
    cin>>x;
    int a[x];
    for(i=0;i<x;i++)
    {
        cout<<"element: ";
        cin>>a[i];
    }
    cout<<"which element? : ";
    int n;
    cin>>n;
    cout<<bs(a,x,n);
}
