#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n)
{
    Node *last , *t;
    int i;
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
void Reverse1(Node *q)
{
    int *A;
    struct Node *p=q;
    //A= new int[Count(q)];
    int i=0;
    while(p!=0)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=q;
    i--;
    while(p!=NULL)
    {
        p->data=A[i];
        p=p->next;
        i--;
    }
}
void Reverse2(struct Node *p)
{
    struct Node *q=NULL , *r=NULL;

    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void Reverse3(Node *q, Node *p)
{
    if(p!=NULL)
    {
        Reverse3(p,p->next);
        p->next=q;
    }   
    else
    {
        first=q;
    }
}
int  Count(struct Node *q)
{
    int c=0;
    while(q!=0)
    {
        c++;
        q=q->next;
    }
    return c;
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
    int A[]={1,2,3,4,5,6};
    create(A,6); 
    Display(first);
    cout<<endl;
    Reverse3(NULL,first);
    Display(first);
    return 0;
}