#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *next;
}*first=NULL,*second=NULL,*third=NULL;

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
void create2(int A[], int n)
{
    Node *last , *t;
    int i;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void Concat(struct Node *p,struct Node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;


}
void Merge(struct Node *p,Node *q)
{
    struct Node *last;
    if(first->data<q->data)
    {
       third=last=p;
       p=p->next; 
       last->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        last->next=NULL;

    }
    
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }

        if(p!=NULL)
        {
            last->next=p;
        }
        else
        {
            last->next=q;
        }
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
    int A[]={10,20,30,40,50};
    int B[]={5,152,252,352,452};
    create(A,5); 
    create2(B,5);
    cout<<"First LL :"<<endl;
    Display(first);
    cout<<endl;
    cout<<"Second LL :"<<endl;
    Display(second);
    cout<<endl;
    cout<<"After Merging Of LL"<<endl;
    Merge(first,second);
    cout<<endl;
    Display(third);













   // cout<<"\n"<<endl;
    //cout<<"Concated linked List"<<endl;
   // Concat(second,first);
    //cout<<endl;
    //Display(third);
    return 0;
}