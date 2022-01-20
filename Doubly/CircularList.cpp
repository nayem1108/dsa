#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data= val;
        next = NULL;
    }
};

void inserthead(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        newnode->next = newnode;
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
}
void inserttail(Node* head, int val)
{
    Node* temp = head;
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        inserthead(head, val);
        return;
    }
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void display(Node* head)
{
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    Node* head = NULL;

    inserttail(head, 1);
    inserttail(head, 3);
    inserttail(head, 6);
    inserttail(head, 7);
    display(head);
    inserthead(head, 16);
    display(head);
    return 0;
}
