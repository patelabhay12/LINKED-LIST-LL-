#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL;

void Insert(int pos,int val)
{
    int i;
    Node *p,*t;
    p=first;
    t=new Node;
    t->data=val;
    t->next=NULL;
    if(pos==0)
    {
        //t->next=first;
        first=t;
    }
    else
    {
        for(i=0;i<pos-1 && p;i++)
        {
            p=p->next;
        }
        if(p!=0)
        {
            t->next=p->next;
            p->next=t;
        }

    }
}

int SortedorNot(struct Node *p)
{
    int x=-65536;
    while(p!=0)
    {
        if(p->data<x)
        {
            return 0;
        }
        else
        {
            x=p->data;
            p=p->next;
        }
    }
    return 1;
}
void Display(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int i;
    for(i=0;i<8;i++)
    {
        int n;
        cout<<"Enter your Number "<<endl;
        cin>>n;
        Insert(i,n);
    }
    Display(first);
    cout<<endl;
    int m=SortedorNot(first);
    if(m)
    {
        cout<<"LL is Sorted "<<endl;
    }
    else
    {
        cout<<"LL is Not Sorted "<<endl;
    }
    return 0;
}