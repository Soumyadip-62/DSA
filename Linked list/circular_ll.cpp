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
    return 0;
}