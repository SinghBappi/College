#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void traversal(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty";
        return;
    }
    cout << "Traversal:\n";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatend(Node *&head, int val)
{
    Node *newnode = new Node(val);
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
    }
}

void deleteatend(Node *&head)
{
    if (head == NULL)
    {
        cout << " Node Empty!";
        return;
    }
    if (head->next == NULL)
    {
        cout << "Single Node";
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;

}




int main()
{
    // cout<<"Link list";
    Node *head = new Node(7);
    head->next = new Node(33);
    head->next->next = new Node(93);
    head->next->next->next = new Node(1);
    traversal(head);
    insertatend(head, 8);
    traversal(head);
    deleteatend(head);
    traversal(head);

    return 0;
}