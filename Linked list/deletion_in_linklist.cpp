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
    while (p != NULL)
    {
        cout << "Element : " << p->data << endl;
        p = p->next; /* code */
    }
}
//deleting the first element
struct node *deletefirstnode(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}
//deletion at a given index
struct node *deleteindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *deletevalue(struct node *head, int val)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->data != val)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *deletelast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = first;

    first->data = 3;
    first->next = second;

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    // traversal(head);
    /*cout << "after deleting the first node \n";
    head = deletefirstnode(head);*/
    traversal(head);
    /*cout << "after deleting at given index\n";
    head = deleteindex(head, 3);
    traversal(head);*/
    cout << "after deleting the value \n";
    head = deletevalue(head, 8);
    traversal(head);
    cout << "after deleteing the last element\n";
    head = deletelast(head);
    traversal(head);
    return 0;
}