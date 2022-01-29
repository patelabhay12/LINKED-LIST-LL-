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
    int A[]={1,2,3,4,5,6};
    create(A,6);
    Display(first);
    cout<<endl;
    INSERT(3,10);
    Display(first);
    return 0;
}