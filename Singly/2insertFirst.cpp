
#include <iostream>
using namespace std;

// Create a node
class Node
{
public:
    int data;
    struct Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtBeg(Node* &head_ref, int new_data)
{
    cout<<"Inserting at Beg:\n";

    // Allocate memory to a node
    Node* new_node =new Node(new_data);

    // insert the data
    new_node->next = head_ref;

    // Move head to new node
    head_ref = new_node;
}


void insertAtEnd(Node* &head_ref, int new_data)
{
    cout<<"Inserting at end:\n";
    Node* new_node = new Node(new_data);

    if (head_ref == NULL)
    {
        head_ref = new_node;
        return;
    }

    Node* temp = head_ref; /* used in step 5*/
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
}

void printList(struct Node* temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head =NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    int val;
    cin>>val;
    insertAtEnd(head,val);
    printList(head);
    insertAtBeg(head,val);
    printList(head);}

    return 0;
}









//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//
//
//struct Node
//{
//    int data;
//    Node* next;
//};
//
//
//void insertFirst(Node** head, int val)
//{
//    Node* temp = new Node();
//
//    temp->data =val;
//    temp->next = (*head);
//
//    (*head)= temp;
//}
//void print(Node *temp)
//{
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<" ";
//        temp = temp->next;
//    }
//    cout<<endl;
//
//}
//int main()
//{
//    Node* head=NULL;
//    head = new Node;
//
////    head->data = 6;
////    head->next  = NULL;
////    print(head);
//    int n;
//    cout<<"how many number?\n";
//    cin>>n;
//    for(int i=0; i<n; i++)
//    {
//        cout<<"Enter values:\n";
//        int val;
//        cin>>val;
//        insertFirst(&head, val);
//        print(head);
//    }
////    int val;
////    cin>>val;
////    with out function
////    Node* temp = NULL;
////    temp = new Node;
////    temp->data = val;
////    temp->next = head;
////    head = temp;
//
///*  //using function
//    head = insertFirst(head, val);
//    print(head);*/
//    return 0;
//}
