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
    struct Node *t,*last;
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
// Display Of LL using Recursion 
void RDisplay(struct Node *p)
{
    if(p!=0)
    {
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}
// Display Of linked Reverse Order Just Simple Way using Recursion

void ReverseDisplay(struct Node *q)
{
    if(q!=0)
    {
        ReverseDisplay(q->next);
        cout<<q->data<<" ";
    }
}

int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    //RDisplay(first);
    ReverseDisplay(first);
    return 0;
}