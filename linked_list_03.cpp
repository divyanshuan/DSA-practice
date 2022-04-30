/* Program to find middle element of  linked list */
#include <iostream>
using namespace std;
class Node // A linked list node
{
public:
    int data;
    Node *next;
    Node(){};
};
void push(Node **head_ref, int value) // insertion at the head
{
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node; // head pointer is assigned to new node
}
void display(Node *node) // function to print linked list // traversing the linked list
{

    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
    cout << " " << endl;
}
void middleFinder(Node * temp){
    Node * slow = temp;
    Node * fast = temp;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"The middle element is  " << slow->data<<endl;
    
};
int main(int argc, char const *argv[])
{
    Node * head= NULL;
    push(&head, 2);
    push(&head,14);
    push(&head,9); 
    push(&head,8);
    push(&head,11);
    middleFinder(head);
    return 0;
}
