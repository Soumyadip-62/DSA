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
//deleteing the first node://
struct node *deleteFirst(struct node *head)
{
    struct node *prev = head;
    struct node *first = head;
    while (prev->next != head)
    {
        prev = prev->next;
    }
    prev->next = first->next;
    head = prev->next;
    free(first);
    return head;
}
//deleting the last node ://
struct node *deleteLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = head;
    free(q);
    return head;
}
//deleting a node in between://
struct node *deleteBetween(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 1;
    while (i < index)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
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
    /** head = deleteFirst(head);
    cout << "after deleteing the first node\n";
    traversal(head);
    head = deleteLast(head);
    cout << "after deleteing the last node\n";*/
    head = deleteBetween(head, 1);
    cout << "after deleteing the node in between\n";
    traversal(head);
    return 0;
}