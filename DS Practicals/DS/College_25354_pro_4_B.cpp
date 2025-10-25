 #include<iostream>
 using namespace std;

const int MAX = 5;
int front = -1;
int rear = -1;
int q[MAX];
void insert(){
	int val;
	cout<<"Enter value:";
	cin>>val;
	if((rear +1 )%MAX == front){
		cout<<"Queue is full.\n";
		
	}
	else if(rear == -1){
		rear = front =0;
		q[rear]=val;
		cout<<"Inserted successfully .\n";
	}
	else{
		rear = (rear + 1)%MAX;
		q[rear]=val;
		cout<<"Inserted scuccessfully.\n";
		
	}	
}

int deleteq(){
	if(front == -1){
		cout<<"Queue is empty.\n";
		return -1;
		
	}
	else if(front == rear){
		int val = q[front];
		front = rear= -1;
		cout<<"Delted value is "<< val<<endl;
		return val;
		
	}
	else{
		int val = q[front];
		front = (front +1)%MAX;
		cout<<"Deleted value is "<<val<<endl;
		return val;
		
	}
}

void display(){
	if (front == -1 ){
		cout<<"Queue is empty"<<endl;
		
	}
	else{
		cout<<"Queue:";
		int i = front;
		while(true){
			cout<<q[i]<<" ";
			if(i== rear) break;
			i=(i+1)%MAX;
			
		}
		cout<<endl;
	}
}
 int main(){
// 	cout<<"Hello, world!";

int choice;
do{
	cout<<"\n****** Main Menu ******\n";
	cout<<"1.Insert\n";
	cout<<"2.Delete\n";
	cout<<"3.Display\n";
	cout<<"4.Exit\n";
	cout<<"Enter your choice:\n";
	cin>>choice;
	switch(choice){
		case 1: insert(); break;
		case 2: deleteq(); break;
		case 3: display(); break;
		case 4: cout<<"Exiting !...\n"; break;
		default : cout<<"Invalid choice ! \n";
	}
}while(choice!=4);
return 0;
 }
