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


void RemoveDuplicate(struct Node *p)
{
    Node *q=p->next;

    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }

    }
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
    RemoveDuplicate(first);
    cout<<endl;
    cout<<"After Removing The Duplicate From the LL "<<endl;
    Display(first);


    return 0;
}