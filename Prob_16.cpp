// Display middle element of linked list in one pass
// This can be done using two pointers

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

node *head = NULL;

void insertBeg(int d)
{
    node *ptr = new node();
    ptr->data = d;
    ptr->link = head;
    head = ptr;
}

void Display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->link;
    }
}

void showMid()
{
    node *slow = head;
    node *fast = head;

    if (head == NULL)
        cout << "List is empty";

    else
    {
        while (fast != NULL && fast->link != NULL)
        {
            slow = slow->link;
            fast = fast->link->link;
        }
        cout << "Middle Element is: " << slow->data;
    }
}

int main()
{

    insertBeg(10);
    insertBeg(20);
    insertBeg(30);
    insertBeg(40);
    insertBeg(50);

    Display();

    showMid();

    return 0;
}