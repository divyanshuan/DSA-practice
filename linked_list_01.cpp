#include <bits/stdc++.h>
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

void insertAfter(Node *prev_node, int value) // inserting between two node
{
    if (prev_node == NULL)
    {
        cout << "The previous node can't be NULL";
        return;
    }
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void append(Node **head_ref, int value)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = value;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
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
void middleFinder(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp = head;
    cout << "    hello    " << count << endl;
    if (count % 2 == 0)
    {
        int middle = (count / 2);
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }
        cout << "the middle element is : " << temp->data << endl;
    }
    else
    {

        int middle = (count / 2) + 1;
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }
        cout << "the middle element is : " << temp->data << endl;
    }
}
int main()
{
    /* Start with the empty list */
    Node *head = NULL;

    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    insertAfter(head->next->next, 8);
    append(&head, 4);
    cout << "Created Linked list is: ";
    display(head);
    middleFinder(head);

    return 0;
}

