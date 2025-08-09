#include<iostream>
using namespace std;

#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

void enque(int element) {
	if(rear==MAX-1) {
		cout<<"Overflow !";
		return;
	} else {
		if(front == -1) {
			front=0;
		}
		rear++;
		queue[rear]=element;
		cout<<element<<" Element is inserted !";

	}

}

void display() {
	if(front == -1 and rear == -1) {
		cout<<"Queue is empty !";
	} else {
		cout<<"Elements in the queue";
		for(int i = front; i<=rear; i++) {
			cout<<queue[i]<<" ";


		}
		cout<<endl;
	}


}


void deque() {
	if(front == -1 and rear == -1) {
		cout<<"queue is empty !";
		return;
	} else {
		int del = queue[front];
		if(front == rear) {
			front = -1;
			rear = -1;

		} else {
			front++;
			
		}
		cout<<"Element "<<del<<" has been deleted !";
			
	}
}


int main() {

	int ch,ele;
	while(1) {

		cout<<"\nQueue Operations\n";
		cout<<"1.Enque Operation\n";
		cout<<"2.Dequeue Operation\n";
		cout<<"3.Display Elements\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:\n";
		cin>>ch;

		switch(ch) {
			case 1:
				cout<<"Enter the element for enqueue:";
				cin>>ele;
				enque(ele);
			case 2:
				deque
		}

	}


	return 0;

}
