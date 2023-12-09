#include<iostream>
using namespace std;
struct st
{
    int rollno ;
    struct st *next;
};
struct st *top=NULL,*newrec;
void ins()
{
    newrec = new struct st;
    cout<<"Enter Element: ";
    cin>>newrec->rollno;
    newrec->next=top;
    top=newrec;
}
void pop()
{
    top = top->next;
}
void dis()
{
    newrec = top;
    while(newrec!=NULL)
    {
        cout<<newrec->rollno<<" ";
        newrec=newrec->next;
    }
    cout<<endl;
}
int main()
{
    int x;
    cout<<"Enter: \n1 to Enter Element in Stack \n2 to Pop element \n3 to Display Stack\n0 to Exit\n";
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
                    ins();
                break;
            case 2:
                pop();
                break;
            case 3:
                dis();
                break;
            default:
                cout<<"Invalid Input\n";
        }
    }
}
