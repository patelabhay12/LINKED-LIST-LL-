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
// Simple Function For Node Counting 
int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
// recursive Function for Node Counting
int Rcount(struct Node *p)
{
    /*int x=0;
    if(p)
    {
        x=count(p->next);
        return x+1;
    }
    else
    {
        return 0;
    }*/
    if(p==0)
    {
        return 0;
    }
    else{
        return count(p->next)+1;
    }

} 
int SUM(struct Node *r)
{
    int sum=0;
    while(r!=NULL)
    {
        sum=sum+r->data;
        r=r->next;
    }
    return sum;
}
int RSum(struct Node *q)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return RSum(p->next)+p->data;
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
    create(A,5);
    Display(first);
    cout<<endl;
    cout<<count(first)<<endl;
    cout<<"Sum of All Element is "<<SUM(first)<<endl;
    return 0;
}