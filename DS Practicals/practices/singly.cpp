#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};
Node *head = nullptr;
void insert (int val) {
	Node * newnode = new Node{val,nullptr};
	if(head==nullptr) {
		head = newnode;
		return;
	} else {
		Node *temp = head;
		while(temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
	}

}
void display() {
	if(head == nullptr) {
		cout<<"Empty!";
		return;
	} else {
		Node *temp = head;
		while(temp->next!=nullptr) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
}
void deleten(int val) {
	if(head == nullptr) {
		cout<<"Empty!";
		return;
	}
	if(head->next == nullptr) {
//		cout<<"Empty!";
		Node* temp = head;
		head = nullptr;
		cout<<temp->data<<" is deleted !";
		delete temp;
		return;
	} else {
		Node* temp = head;
		while(temp->next!=nullptr and temp->next->data!=val) {
			temp = temp->next;
		}
		if(temp->next!=nullptr) {
			Node *todel = temp->next;
			temp->next = temp->next->next;
			delete todel;
		}
	}}

	int main() {
		// cout << "Hello, World!";
		insert(10);
		insert(20);
		insert(30);
		display();           // Output: 10 -> 20 -> 30 -> NULL

		deleten(20);
		display();
		return 0;
	}