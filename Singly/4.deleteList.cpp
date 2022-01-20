#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertFst(Node* &head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertEnd(Node* &head, int val)
{
    Node *n =new Node(val);

    if(head ==NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node *temp)
{
    if(temp == NULL)
    {
        cout<<"List is empty!!";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteFst(Node* &head)
{
    Node *temp = head;
    head = head->next;

    delete temp;
}

void deletelst(Node* &head)
{
    if(head!=NULL)
    {
        if(head->next == NULL)
        {
            cout<<"NULL\n";
            head = NULL;
            //delete head;
            return;
        }
    }
    Node* temp = head;
    Node* delNode;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delNode = temp->next;
    temp->next = NULL;
    delete delNode;


}

void delKey(Node* &head, int key)
{
    if(head == NULL)
    {
        cout<<"Head is NULL";
        return;
    }
    if(head->data == key)
    {
        cout<<"Delete head:";
        deleteFst(head);
        return;
    }

    Node* temp=head;
    while(temp->next->data != key)
    {
        temp = temp->next;
    }
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

int main()
{
    Node *head = NULL;
    insertEnd(head, 55);
    insertEnd(head, 52);
    insertEnd(head, 43);
    insertEnd(head, 58);
    print(head);
    insertFst(head, 11);
    print(head);

    cout<<"Delete Head:"<<endl;
    deleteFst(head);
    print(head);

    cout<<"Delete by value:\n";
    delKey(head, 58);
    print(head);
    cout<<"Delete Head via key:\n";
//    delKey(head, 55);
//    print(head);
    //delKey(head, 43);
    //print(head);
    cout<<"delete only single\n";
    deletelst(head);
    print(head);
    return 0;
}
