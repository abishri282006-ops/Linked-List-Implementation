#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node *insertAtEnd(Node* head,int data)
{
    Node *temp;
     Node *newnode=new Node();
     newnode->data=data;
     newnode->next=NULL;
    if(head==NULL)
    {
      return newnode;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
  temp->next=newnode;

  return head;
   
}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout << endl;
}
Node *insertAtStart(Node *head,int data)
{
    Node *temp,*newnode;
    temp=head;
    newnode=new Node();
    newnode->data=data;
    if(head==NULL)
    {
      return newnode;
    }
    newnode->next=temp;
    head=newnode;
    return head;
}
int main()
{
    Node *head=nullptr;

    head = insertAtStart(head,10);
    head = insertAtStart(head,20);
    
    display(head);
    
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,40);
    
    display(head);
    
    return 0;
}
