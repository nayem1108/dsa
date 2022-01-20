#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node* temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertlist(Node* &head, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

//delete head
void delhead(Node* &head)
{
    Node* temp = head;

    head = head->next;
    head->prev =NULL;

    delete temp;
}

void deletion(Node* &head, int pos)
{
    if(pos ==1)
    {
        delhead(head);
    }
    Node* temp = head;
    int count = 1;

    while(temp!=NULL && count!=pos)
    {
         temp = temp->next;
         count++;
    }
    temp->prev->next = temp->next;

    if(temp->next !=NULL)
    {

        temp->next->prev= temp->prev;
    }

    delete temp;
}
int main()
{
    Node* head = NULL;
    insertlist(head,10);
    insertlist(head,16);
    insertlist(head,22);
     insertlist(head,24);
    insertlist(head,73);
    insertlist(head,32);
    printlist(head);

    cout<<"delete head:\n";
    delhead(head);
    printlist(head);
    cout<<"delete at pos:\n";
    deletion(head,5);
    printlist(head);
    return 0;
}

