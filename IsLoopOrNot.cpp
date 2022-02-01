#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};

class LinkedList
{
    Node *head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void InsertNode(int);
    void Display();
    void deleteNode(int);
    
};

void LinkedList::InsertNode(int x)
{
    Node *newnode=new Node(x);
    Node *temp =head;
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;


}


void LinkedList::deleteNode(int pos)
{
    Node *temp1=head, *temp2=NULL;
    int c=0;
    if(head==NULL)
    {
        cout<<"List empty:"<<endl;
        return ;
    }
    while(temp1!=NULL)
    {
        c++;
        temp1=temp1->next;

    }

    if(c<pos)
    {
        cout<<"index Out Of range "<<endl;
        return;
    }

    temp1=head;

    if(pos==1)
    {
        head=head->next;
        delete temp1;
        return ;
    }
    for(int i=0;i<pos;i++)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
    delete temp1;

}

void LinkedList::Display()
{
    Node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}


int main()
{
    LinkedList q;
    q.InsertNode(10);
    q.InsertNode(20);
    q.InsertNode(30);
    q.InsertNode(40);
    q.InsertNode(50);
    q.InsertNode(60);
    q.deleteNode(2);
    q.Display();
    return 0;
}