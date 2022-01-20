#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void inserthead(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}


void push(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        inserthead(head, val);
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;

}

void insertend(Node* &head, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;

    if(head == NULL){
        head = newnode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void printlist(Node* temp)
{
    cout<<"head to tail:\n";
    if(temp == NULL)
    {
        cout<<"Empty";
        return;
    }
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

void printtail(Node* head)
{
    cout<<"Tail to head:\n";
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
   /* while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<temp->data<<endl;*/

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insertatpos(Node* &head, int val, int pos)
{
    Node* newnode = new Node(val);
    Node* temp = head;

    for(int i = 0; i<pos-2; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    if(newnode->next!=NULL)
    {
        temp->next->prev = newnode;
    }

}
int main()
{
    Node* head = NULL;

    push(head, 10);
    push(head, 12);
    push(head, 18);
    push(head, 14);
    push(head, 15);
    cout<<"pushed ";
    printlist(head);
    cout<<"inserthead \n";
    inserthead(head, 72);
    printlist(head);
    cout<<"new insert at pos 2";
    insertatpos(head, 21, 2);
    cout<<"insertend \n";
    insertend(head,1000);
    printlist(head);
    printlist(head);
    printtail(head);

    return 0;
}
