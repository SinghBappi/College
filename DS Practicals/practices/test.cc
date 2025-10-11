#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = nullptr;
void insert(int val)
{
    Node *newnode = new Node{val, nullptr};
    if (head == nullptr)
    {
        // cout<<"\nHead is empty\n";
        head = newnode;
        cout<<head->data<<" is inserted !";
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        cout<<temp->next->data<<" is inserted \n";
    }
}

void display()
{
    if (head == nullptr)
    {
        cout << "Head is empty\n";
        return;
    }
    else
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
void deleted(int val)
{
    if (head == nullptr)
    {
        // delete head;
        cout<<" head is empty";
        return;
    }
    if (head->next == nullptr)
    {
        Node *temp = head;
        head = nullptr;
        cout << temp->data << " is deleted \n";
        delete temp;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr and temp->next->data != val)
        {
            temp = temp->next;
        }
        if (temp->next != nullptr)
        {
            Node *todel = temp->next;
            temp->next = temp->next->next;
            delete todel;
        }
    }
}
void search(int val){
  Node* temp = head;
  int i=1;
  while(temp!=nullptr){
    
    if(temp->data == val){
        cout<<val << " is found at "<< i ;
    }
    temp = temp->next;
    ++i;
  }  
}
void revo(){
    if(head==nullptr){
        return;
    }
    revo();
    cout<<head->data<<" ";
}
int main()
{
    // Node s;
    insert(4);  cout<<endl;
    insert(40);
    insert(400);
    // display();
    deleted(400);
    display();
    search(4);
    revo();

    return 0;
}