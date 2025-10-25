 #include<iostream>
 using namespace std;
const int MAX = 5;
int q[MAX];
int front = -1;
int rear = -1;


bool isfull(){
	return (front == (rear+1)%MAX);
}
bool isempty(){
	return ( front == -1);
	
}
void insertrear(){
	int val;
	cout<<"Enter value:";
	cin>>val;
	if(isfull()){
	cout<<"Queue is full\n";
	return;
	}
	if(isempty()){
		front = rear =0;
		
	}
	else{
		rear = (rear+1)%MAX;
		
	}
	q[rear]=val;
	cout<<"Inserted at rear\n";
	
	}
void insertfront(){
	int val;
	cout<<"Enter value:";
	cin>>val;
	if(isfull()){
		cout<<"Queue is full\n";
		return ;
		
	}
	if (isempty()){
		front = rear =0;
	}else{
		front = (front - 1 + MAX)%MAX;
	}
	q[front]=val;
	cout<<"Inserted at front.\n";
}
void deletefront(){
	if(isempty()){
		cout<<"Queue is empty\n";
		return;
	}
	cout<<"Deleted from front:"<<q[front]<<endl;
	if(front == rear){
		front = rear = -1;
	} else{
		front = (front+1)%MAX;
		
	}
}	
void deleterear(){
	if(isempty()){
		cout<<"Queue is empty.\n";
		return;
	}
	cout<<"Display from rear:"<<q[rear]<<endl;
	if(front == rear){
		front = rear -1;
	}
	else{
		rear = (rear - 1 + MAX)%MAX;
	}
}	
void display(){
	if(isempty()){
		cout<<"Queue is empty.\n";
		return;
	}
	cout<<"Queue:";
	int i = front;
	while(true){
		cout<<q[i]<<" ";
		if(i==rear) break;
		i = (i+1)%MAX;
		
	}
	cout<<endl;
}
 int main(){
// 	cout<<"Hello, world!";
int choice;
do{
	cout<<"\n***Main Menu***\n";
	cout<<"1.Insert Rear\n";
	cout<<"2.Insert Front\n";
	cout<<"3.Delete Front \n";
	cout<<"4.Delete Rear\n";
	cout<<"5. Display\n";
	cout<<"6.Exit\n";
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1: insertrear(); break;
		case 2: insertfront(); break;
		case 3: deletefront(); break;
		case 4: deleterear(); break;
		case 5: display(); break;
		case 6: cout<<"Exitng...\n"; break;
		default :cout<<"Invalid choice!\n";
	}
}while(choice !=6);


return 0;
 }
