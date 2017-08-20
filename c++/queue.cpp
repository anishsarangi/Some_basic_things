#include<iostream>
#include<cstdlib>
#include<string>
#define size 10
int array2[size];
int r=-1,f=-1;
using namespace std;
void enqueue(int data)
{
    if(r==-1)
    {
        r=f=0;
        array2[r]=data;
    }
    else
    {
        r++;
        array2[r]=data;
    }
}
void dequeue()
{
    f=f+1;
}
int isfull()
{
    if(r>=size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(f==-1 && f>=r)
    {
        f=r=-1;
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,x;
    do
    {
        cout<<"1.For insertion"<<endl;
        cout<<"2.For deletion"<<endl;
        cout<<"3.To see the queue"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>n;
        if(n==1)
        {
            if(isfull())
            {
                cout<<"The queue is full";
                continue;
            }
            else
            {
                cout<<"Enter the number to be inserted"<<endl;
                cin>>x;
                enqueue(x);
            }
        }
        else if(n==2)       
        {
            if(isempty())
            {
                cout<<"The queue is empty";
                continue;
            }
            else
            {
                dequeue();
            }
        }
        else if(n==3)
        {
            if(r<f)
            {
                cout<<"The stack is empty"<<endl;
            }
            else
            {
                for(int i=f;i<=r;i++)
                {
                    cout<<array2[i]<<endl;
                }   
            }
        }
    }while(n!=4);
    return 0;
}