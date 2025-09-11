#include <iostream>
using namespace std;
#define maxi 5
struct Queue {
	int arr[maxi];
	int front, rear;
	Queue() {
		front = rear = -1;
	}
	void enqueue(int val) {
		if(rear == maxi -1) {
			cout<<"Overflow Error !"<<endl;
			return;
		}

		else {
			if(front == -1) {
				front = 0;
			}
			++rear ;
			arr[rear]=val;
			cout<<"value enqueue is "<<arr[rear]<<endl;
		}
	}
	void display() {
		if(rear == -1) {
			cout<<"Undeflow error !"<<endl;
			return;
		} else {
			for(int i = front; i<=rear; i++) {
				cout<<arr[i]<<" ";
			}
		}
	}
	void peek() {
		if(rear == -1) {
			cout<<"Undeflow error !"<<endl;
			return;
		}

		else {
			cout<<"Peak:"<<arr[front]<<endl;
		}
	}
	void deque () {
		if(rear == -1) {
			cout<<"Undeflow error !";
			return;
		} else {
			++front;
			cout<<"Now front is "<<arr[front]<<endl;
		}
	}
};
int main() {
	// cout << "Hello, World!";
	Queue s;
	s.enqueue(4);
	s.enqueue(40);
	s.display();
	s.peek();
	s.deque();
	s.display();
	

	return 0;
}