#include<iostream>
using namespace std;

#define MAX  5
int top = -1;
int stack[MAX];

void push(){
	if(top==MAX - 1){
		cout<<"Overflow Error!";
		return ;
	}
	else{
		int data;
		cout<<"Enter the element for push:";cin>>data;
		top++;
		stack[top]=data;
		cout<<data<<" Pushed !\n";
	
	}	
}

void pop(){
	if(top==-1){
		cout<<"Underflow Error !";
		return ;
	}
	else{
		cout<<stack[top]<<" Poped !\n";
		top--;
	}
}

void display(){
	if(top==-1){
		cout<<"Empty !";
		return;
	}
	else{
		cout<<"Stack Elements from top to bottom:\n";
		for (int i = top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}
}






int main(){
	int ch;
	do{
		cout<<"\nStack Operations\n";
		cout<<"1.Push Operation\n";
		cout<<"2.Pop Operation\n";
		cout<<"3.Display Elements\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:\n";cin>>ch;
		switch(ch){
			case 1:
				push();break;
			case 2:
				pop();break;
			case 3:
				display();break;
			case 4:
				cout<<"Bye Bye !";
				return 0;
			default:
				cout<<"Invalid Option!";
				
		}
	}while (ch!= 4);



return 0;

}
