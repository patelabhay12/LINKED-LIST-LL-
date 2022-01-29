#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*first=NULL;

int create(int A[],int n)
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
// This Function Will work For All Type of Position insertion Last First Mid Any Where In rtha linkeList 
void INSERT(int pos,int x)
{
    struct Node *t,*p;
    int i;
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->next=NULL;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(i=0;i<pos-1 && p;i++ )
        {
            p=p->next;
        }
        if(p!=0)
        {
            t=new Node;
            t->data=x;
            t->next=NULL;
            t->next=p->next;
            p->next=t;
        }

    }

}
// Using Single Pointer
void SortedInsert(struct Node *p, int x)
{
    struct Node *t;
    while(p && p->next->data<x)
    {
        p=p->next;
    }
    t=new Node;
    t->data=x;
    t->next=NULL;
    t->next=p->next;
    p->next=t;
}
// Using 2 pointer
void TSortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
    }
}
void Display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int i;
    for(i=0;i<6;i++)
    {
        int p;
        cout<<"Enter your Element "<<endl;
        cin>>p;
        INSERT(i,p);
    }
    cout<<"Element Of LinkedList Is "<<endl;
    Display(first);
    cout<<endl;
    cout<<"After Sorted Position insertion "<<endl;
    SortedInsert(first,5);
    Display(first);
    return 0;
}