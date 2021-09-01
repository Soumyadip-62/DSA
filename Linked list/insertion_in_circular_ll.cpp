#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *p = head;
    while (p->next != head)
    {
        cout << "Element : " << p->data << endl;
        p = p->next; /* code */
    }
    cout << "Element : " << p->data << endl;
}
//insert at the begining ://
struct node *insertatbeg(struct node *head, int val)
{
    struct node *newhead;
    newhead = (struct node *)malloc(sizeof(struct node));
    newhead->next = head;
    newhead->data = val;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = newhead;

    return newhead;
}
//insert at the end ://
struct node *insertatend(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    ptr->data = val;
    return ptr;
}
//insert after a given index://
struct node *insertatindex(struct node *head, int index, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index; i++)
    {
        p = p->next;
        q = q->next;
    }
    ptr->data = val;
    p->next = ptr;
    ptr->next = q;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = head;

    traversal(head);
    head = insertatbeg(head, 6);
    cout << "After inserting at head\n";
    traversal(head);
    insertatend(head, 8);
    cout << "After inserting at end\n";
    traversal(head);
    insertatindex(head, 2, 9);
    cout << "After inserting after given index\n";
    traversal(head);
    return 0;
}