#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
typedef struct Node Node;

void print(Node *head)
{
    if(head==NULL)
    {
        cout<<"List is empty";
        return;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node *head =NULL;
    Node *first = NULL;
    Node *second = NULL;

    head = new Node;
    first = new Node;
    second = new Node;
    head->data = 15;
    head->next = NULL;
    head->next = first;

    first->data = 98;
    first->next = NULL;
    print(head);
    return 0;
}

