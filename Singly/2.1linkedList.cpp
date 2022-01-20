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

void insertStart(Node* &head, int val)
{
    Node* temp = new Node(val);
    temp->next =head;
    head = temp;
}

void insertlast(Node* &head, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

bool search(Node* head, int key)
{
    int i =0;
    while(head!=NULL)
    {
        if(head->data==key)
        {
            cout<<"Found at "<<i<<endl;
            return true;
        }
        i++;
        head =head->next;

    }
    cout<<key<<" Not Found \n";
    return false;
}
void print(Node* temp)
{
    if(temp == NULL)
    {
        cout<<"List is empty\n";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head =NULL;

    insertStart(head, 1);
    print(head);
    cout<<"Inserting at Starting:\n";
    insertStart(head,7);

    print(head);
    cout<<"Inserting at End: \n";
    insertlast(head, 10);
    insertlast(head, 1);
    insertlast(head, 15);
    insertlast(head, 19);
    print(head);
    int key;
    cin>>key;
    cout<<search(head, key);
    return 0;

}
