 #include<iostream>
 using namespace std;

struct Node{
	int data;
	Node * next;
	
};
Node* createNode(int value){
	
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}


void insertEnd(Node* & head, int value){
	Node* newNode = createNode(value);
	if(head==NULL){
		head = newNode;
	}
	else{
		Node* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next=newNode;
		
	}
	
	

	
	
}
	void displayReverse(Node *head){
	if(head == NULL){
		return;
	}
	displayReverse(head->next);
	cout << head->data << " ";
}

 int main(){
// 	cout<<"Hello, world!";


Node* head = NULL;
int n,value;
cout<<"Enter the number of Nodes:";
cin>>n;

for(int i = 0;i<n;i++){
	cout<<"Enter value for nodes"<<i+1<<":";
	cin>>value;
	insertEnd(head,value);
	
}



cout<<"Linked list in reverse order";
displayReverse(head);
cout<<endl;





return 0;




 }