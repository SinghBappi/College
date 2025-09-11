#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head = nullptr;
void insertnode(int val) {
	Node * newnode = new Node{val,nullptr};
	if(head==nullptr) {
//		cout<<"Head is empty !";
//		return ;
		head = newnode;
	} else {
		Node *temp = head;
		while(temp->next!=nullptr) {
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void display() {
	Node * temp = head;
	while(temp!=nullptr) {
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<"Null";
}
int main() {


	insertnode(10);
	insertnode(20);
	insertnode(30);
	display();
//getch();

	return 0;

}
