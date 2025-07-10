#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;

    }
};

void traversing (Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
// Node* head = NULL;



int main(){
    // insertatbegin(5);
    Node* head = new Node(5);
    head->next= new Node(10);
    head->next->next= new Node(15);
    head->next->next->next= new Node(20);
    head->next->next->next->next= new Node(25);
    traversing(head);
    



    return 0;
}