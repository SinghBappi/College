#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* prev;
	Node* next;
	Node(int data) {
		this->data=data;
		this->next=nullptr;
		this->prev=nullptr;
	}
};

Node *insert(Node *&head,int data) {
	Node newnode = new Node(data);
	if( head == nullptr) {
		head = newnode;
	} else {
		Node * temp = head;
		while( temp->next !=nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev= temp;

	}
	return head;
}

void traversal(Node * head) {
	if(head== nullptr) {
		cout<<"Null";
		return;
	} else {
		Node * temp = head;
		while( temp!= nullptr) {
			cout<<temp->data<<endl;
			temp = temp->next;

		}
	}
}
void DAE(Node *&head) {
	if(head == nullptr) {
		return ;

	}
	if ( head->next==nullptr) {

		delete head;
//		return ;
		head = nullptr;
		return;
	} else {
		Node * temp = head;
		while( temp->next!=nullptr) {
			temp = temp->next;
			
		}
		temp-prev->next=nullptr;
		delete temp;
		
		
	}
}

int main() {



	return 0;

}
