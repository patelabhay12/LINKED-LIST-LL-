#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL;
void Creation(int A[],int n)
{
    int i;
    struct Node *last,*t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
int MAX(struct Node *p)
{
    int max=-32768;
    //MIN32_INT;
    while(p!=NULL)
    {
        if(p->data>max){
                max=p->data;
        }

        p=p->next;
    }
    return (max);
    
}
int RMAX(struct Node *t)
{
    int x=0;
    if(p==0)
    {
        return MIN32_INT;
    }
    else{
        x=RMAX(p->next);
        if(x>p->data)
        {
            return x;

        }
        else{
            return p->data
            
        }
    }
}
void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{ 
    int A[]={1,2,3,4,5};
    Creation(A,5);
    Display(first);
    cout<<endl;
    cout<<"Max Number oF linnked List is "<<endl;
    cout<<MAX(first);
    return 0;
}
