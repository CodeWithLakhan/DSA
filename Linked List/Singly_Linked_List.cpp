//Linked List
#include<iostream>
using namespace std;
struct st{
    int rollno;
    struct st *next;
};
struct st *first,*last,*n,*a,*b;
void ins1()
{
    n = new struct st;
    cout<<"Enter Element: ";
    cin>>n->rollno;
    if(first == NULL)
    {
        first = n;
    }
    else
    {
        last-> next= n;
    }
    last = n;
}
void ins2()
{
    a=b=first;
    cout<<"Enter Position: ";
    int p;
    cin>>p;
    for(int i=0; i<p-1;i++)
    {
        a=b;
        b = b->next;
    }
    n = new struct st;
    cout<<"Enter element : ";
    cin>>n->rollno;
    n->next=NULL;
    a->next = n;
    n->next = b;
}
void dis()
{
    n = first;
    while(n!=NULL)
    {
        cout<<n->rollno<<" ";
        n=n->next;
    }
    cout<<endl;
}
void del()
{
    cout<<"Entter Position of element: ";
    int p;
    cin>>p;
    a=b=first;
    for(int i=0;i<p-1;i++)
    {
        a=b;
        b=b->next;
    }
    a->next=b->next;
}
int main()
{
    first = NULL;
    last = NULL;
    cout<<"Enter: \n1 to Insert element in Linked List\n2 to Insert element at position\n3 to Delete element\n4 to Display Linked List\n0 to Exit\n";
    int x;
    while(1)
    {
        cout<<"Enter Your Choice: ";
        cin>>x;
        if(x==0)
        {
            cout<<"Thank You !!";
            break;
        }
        switch(x)
        {
            case 1:
                cout<<"How many elements do you want to insert?: ";
                int n;
                cin>>n;
                for(int i=0;i<n;i++)
                    ins1();
                break;
            case 2:
                ins2();
                break;
            case 3:
                del();
                break;
            case 4:
                dis();
                break;
            default:
                cout<<"Invalid Input\n";
        }
    }
}
