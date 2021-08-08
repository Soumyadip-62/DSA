#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
//link list traversal function
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//function to insert element at head
struct Node *insertatHead(struct Node *ptr, int val)
{
    struct Node *newh;
    newh = (struct Node *)malloc(sizeof(struct Node));
    newh->next = ptr;
    newh->data = val;

    return newh;
}
//fucntion to insert at a given index
struct Node *insertinbetween(struct Node *head, int val, int index)
{
    struct Node *ins;
    ins = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ins->data = val;
    ins->next = p->next;
    p->next = ins;
    return head;
}
//function to insert at end
struct Node *insertatend(struct Node *head, int val)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = val;
    p->next = ptr;
    ptr->next= NULL;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

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
    fourth->next = NULL;

    linkedListTraversal(head);
    cout << endl;
    head = insertatHead(head, 45);
    linkedListTraversal(head);
    cout << endl;
    insertinbetween(head, 39, 2);
    linkedListTraversal(head);
    cout << endl;
    insertatend(head, 69);
    linkedListTraversal(head);
    return 0;
}
