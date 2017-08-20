#include<iostream>
#include<string>
#define size 10
int array1[size];
int top=-1;
using namespace std;

void push(int x)
{
    if(top==size)
    {
        cout<<"The stack is full"<<endl;
    }
    else
    {
        array1[top+1]=x;
        top+=1;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"The stack is underflow"<<endl;
    }
    else
    {
        top-=1;
    }
}
void update(int x,int y)
{   if(x<=top)
    {
        array1[x]=y;
    }
    else
    {
        cout<<"Invalid index"<<endl;
    }
}

int main()
{
    while(1)
    {
        cout<<"WElcome to the Stack"<<endl;
        cout<<"1.To perofm push operation"<<endl;
        cout<<"2.To perofm pop operation"<<endl;
        cout<<"3.To perofm update operation"<<endl;
        cout<<"4.To see the stack"<<endl;
        int optionSelected;
        cin>>optionSelected;
        switch(optionSelected)
        {
            case 1:int x;
                    cout<<"the number which you want to push";
                    cin>>x;
                    push(x);   
                    break;
            case 2:pop();
                    break;
            case 3:int p,q;
                    cout<<"enter the index at which you want to store the data"<<endl;
                    cin>>p;
                    cout<<"enter the value of the data"<<endl;
                    cin>>q;
                    update(p,q);
                    break;
            case 4:if(top!=-1)
                    {
                        for(int i=0;i<=top;i++)
                        {
                            cout<<array1[i]<<endl;
                        }
                        break;
                    }
            default:cout<<"entered a wrong choice"<<endl;
        }
    }
    return 0;
}