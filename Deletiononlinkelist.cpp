#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL;

void create(int A[] , int n)
{
    int i;
    Node *last,*t;
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
int DELETION(struct Node *p , int pos)
{
    int x=-1;
    if(pos==1)
    {
        x=p->data;
        first=p->next;
        delete p;
    }
    else
    {
        struct Node *q=NULL;
        int i;
        for(i=0;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            x=p->data;
            delete p;
        }

    }
    return x;
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
    int A[]={1,2,3,4,5,6,7};
    create(A,7);
    Display(first);
    cout<<endl;
    cout<<"Deleted Element is = "<<DELETION(first,2)<<endl;
    Display(first);


    
    return 0;
}