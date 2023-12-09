#include<iostream>
using namespace std;
struct st
{
    int rollno ;
    struct st *next;
};
struct st *front,*rear,*newrec;
void ins()
{
    newrec = new struct st;
    cout<<"Enter Element: ";
    cin>>newrec->rollno;
    newrec->next=NULL;
    if(front == NULL)
    {
        front = newrec;
    }
    else
    {
        rear->next=newrec;
    }
    rear = newrec;
}
void display()
{
    newrec = front;
    while(newrec!=NULL)
    {
        cout<<newrec->rollno<<" ";
        newrec=newrec->next;
    }
    cout<<endl;
}
void del()
{
    newrec = front;
    front = front->next;

}
int main()
{

    front=NULL;
    rear=NULL;
    cout<<"Enter: \n1 to Enter Element in Queue \n2 to Pop element for Queue\n3 to Display Queue\n0 to Exit\n";
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
                    ins();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            default:
                cout<<"Invalid Input\n";
        }
    }
}
