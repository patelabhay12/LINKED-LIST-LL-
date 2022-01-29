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
Node* Search(Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return (p);
        }
        p=p->next;
    }
    return NULL;
}
Node* RSearch(Node *p, int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(key==p->data)
    {
        return (p);

    }
    else{
        return RSearch(p->next,key);
    }

}
Node* IMPROVEMENTMOVETOHEAD(struct Node ,int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q-next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
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
    struct Node *temp;
    int A[]={1,2,3,4,5};
    Creation(A,5);
    Display(first);
    cout<<endl;
    temp=Search(first,5);
    if(temp)
    {
        cout<<"Key Was forund "<<temp->data<<endl;;
    }
    else
    {
        cout<<"key was Not Forund "<<endl
    }
    return 0;
}