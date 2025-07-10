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

void searching(Node *&head, int key)
{
    Node *temp = head;
    int pos = 1;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Key found at " << pos << "\nkey is " << key << endl;
            found = true;
            // return;
        }
        temp = temp->next;
        pos++;
    }
    if (!found)
    {
        cout << "Key " << key << " is not found";
    }
}

void discorev(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    discorev(head->next);
    cout << head->data << " ";
}

Node *copylist(Node *head)
{
    if (head == NULL)
        return NULL;
    // Node* newHead = new Node{head->data,NULL}; college
    Node *newHead = new Node(head->data);
    Node *tempnew = newHead;
    Node *tempold = head->next;

    while (tempold != NULL)
    {
        tempnew->next = new Node(tempold->data);
        tempnew = tempnew->next;
        tempold = tempold->next;
    }
    return newHead;
}
/* COLLEGE WALA WRONG
Node* merging(Node* head1,Node* head2){
    if(head1==NULL) return NULL;
    if(head2==NULL) return head1;

    Node* merged = head1;
    while(head1->next!=NULL){
        head1=head1->next;
        head1->next = head2;
    }
    return merged;
}
*/
Node *merging(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    Node *temp = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
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
    searching(head, 1);
    traversal(head);
    discorev(head);

    return 0;
}