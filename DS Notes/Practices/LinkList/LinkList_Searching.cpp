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

bool searching(Node* head,int key){
    Node * curr = head;
    while(curr!=NULL){
        if(curr->data == key){
            return true;
        }
        // else?{
            curr = curr->next;
        // }
    }
    return false;
}

int main(){
    // insertatbegin(5);
    Node* head = new Node(5);
    head->next= new Node(10);
    head->next->next= new Node(15);
    head->next->next->next= new Node(20);
    head->next->next->next->next= new Node(25);
    // traversing(head);
    // cout<<searching(head,20); //# output is 1 why ?
    cout<<boolalpha<<searching(head,20); //# output is 1 why ?

 



    return 0;
}