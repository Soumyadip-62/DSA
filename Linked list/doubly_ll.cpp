#include <iostream>
using namespace std;
//creating node structure:
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

//traversal function:
void traversal(struct node *head)
{
    struct node *p = head;

    while (p->next != NULL)
    {
        cout << "Element :" << p->data << endl;
        p = p->next;
    }
    while (p->prev != NULL)
    {
        cout << "Element :" << p->data << endl;
        p = p->prev;
        /* code */
    }
}

int main()
{ //dynamically allocating the nodes:
    struct node *head = (struct node *)malloc(sizeof(struct node *));
    struct node *N1 = (struct node *)malloc(sizeof(struct node *));
    struct node *N2 = (struct node *)malloc(sizeof(struct node *));
    struct node *N3 = (struct node *)malloc(sizeof(struct node *));
    //linking the nodes:
    head->prev = NULL;
    head->data = 7;
    head->next = N1;

    N1->prev = head;
    N1->data = 8;
    N1->next = N2;

    N2->prev = N1;
    N2->data = 9;
    N2->next = N3;

    N3->prev = N2;
    N3->data = 10;
    N3->next = NULL;
    traversal(head);
    return 0;
}