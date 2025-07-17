// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *create(Node *&head, int data)
{
    Node *newnode = new Node(data);
    // return newnode;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return head;
}
void traversal(Node *head)
{
    if (head == NULL)
    {
        cout << "Emptiness!";
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteAtEnd(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void searching(Node *head, int key)
{
    if (head == NULL)
    {
        cout << "The Linked list is empty!";
        return;
    }
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        if (temp->data == key)
        {
            cout << "\n"
                 << "Found at " << i << "and the element is " << key<<endl;
            return;
        }
        temp = temp->next;
    }
    cout << "\nUnable to found!";
    return;
}

void sorted(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty";
        return;
    }
    bool swaped;
    Node *ptr1;
    Node *lptr = NULL;
    do
    {
        swaped = false;
        ptr1 = head;

        // Node *ptr1;
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                // swap(ptr1->data,ptr->next->data);
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swaped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;

    } while (swaped);
}
// void
int main()
{
    Node *head = NULL;
    create(head, 30);
    create(head, 60);
    create(head, 90);
    create(head, 10);
    cout << "Traversal:" << endl;
    traversal(head);
    deleteAtEnd(head);
    cout << "\nDelete:" << endl;
    traversal(head);
    searching((head), 90);
    sorted(head);
    traversal(head);

    // Write C++ code here
    // std::cout << "Try programiz.pro";

    return 0;
}