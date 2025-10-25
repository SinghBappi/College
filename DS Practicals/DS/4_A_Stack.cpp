#include<iostream>
#define MAX_SIZE 10
using namespace std;

void enqueue(int element);
void dequeue();
void display();
int queue[MAX_SIZE];
int front = -1;
int rear = -1;




int main(){

int choice,element;
while(true){
	cout<<"\n Oueue Operations:\n";
	cout<<"1.Insert (Enqueue)\n";
	cout<<"2.Delete (Dequeue)\n";
	cout<<"3. Display\n";
	cout<<"4. Exit\n";
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter the element to insert:";
			cin>>element;
			enqueue(element);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			cout<<"Exiting the program...\n";
			return 0;
		default:
			cout<<"Invalid choice ! Please try again!\n";
	}
	
	
	
}


return 0;
}

void enqueue(int element){
	if(rear==MAX_SIZE-1){
		cout<<"Queue is full ! cannot insert any more elements.\n";
	}
	else{
		rear++;
		queue[rear] = element;
		cout<<"Element "<<element<<" has been inserted.\n";
	}
}



void dequeue(){
	if(front == -1 and rear == -1){
		cout<<"Queue is empty ! Cannot delete any element.\n";
		
	}
	else{
//		front++;
	int deletedElement=queue[front];
	if(front ==rear){
		front = -1;
		rear=-1;
		
	}
	else{
		front++;
	}
		
	cout<<"Element "<<deletedElement <<" has been deleted.\n";
	}
}

void display(){
	if(front == -1 and rear ==-1){
		cout<<"Queue is empty !  Nothing to display.\n";
		
	}
	else{
		cout<<"Elements in the queue:";
		for (int i = front;i<= rear;i++){
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
}

