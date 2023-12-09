// Linear Queue
#include<iostream>
using namespace std;
int que[20], front=-1 , back = -1;
int push()
{
    int i,x;
    cout<<"How many element you want to Insert? ";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"Enter Element: ";
        cin>>que[i];
        back=back+1;
    }
    front=front+1;
}
int pop()
{
    if(front==-1 || front > back)
    {
        cout<<"Queue is Empty\n";
    }
    else
    {
        cout<<"Element deleted from the Que is: "<<que[front]<<endl;
        front=front+1;
    }
}
int display()
{
    int i;
    if(front==-1 || front > back)
    {
        cout<<"Queue is Empty"<<endl;

    }
    else
    {
        for(i=front;i<=back;i++)
        {
            cout<<que[i]<<"  ";
        }
    }
    cout<<endl;
}

int main()
{
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do {
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch) {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: cout<<"Exit"<<endl;
            break;
            default: cout<<"Invalid choice"<<endl;
        }
   } while(ch!=4);
   return 0;
}
