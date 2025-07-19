#include<iostream>
using namespace std;

int arr[20],n1,n2,aii[20],result[20];

void display(int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void create(int num){
	cout<<"\nEntered Num:"<<num<<" elements\n";
	for(int i=0;i<num;i++){
		cin>>arr[i];
		
	}
	cout<<"Created !"<<endl;
	display(num);
}
void merge(int arr[],int aii[],int result[]){
	for(int i=0;i<sizeof(n1);i++){
		result[i]=arr[i];
	}
	for(int i=0;i<sizeof(n2);i++){
		result[n1+i]=aii[i];
	}
}
void search(int value){
	for(int i =0;i<n1;i++){
		if(arr[i]==value){
			cout<<"Found ! at: "<<i<<" the element is :"<<value;
			return;
			
		}
	}
	cout<<"Unable to found!";
}

void sort(int n1){
	for(int i=0;i<n1-1;i++){
		for(int j=0;j<n1-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"Sorted!";
}


void revo(int arr[],int n){
	int start=0,end=n-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}


int main(){
	
	int choice;
	while(choice!=8){
		cout<<"\n---Bakchodi Area---\n";
		cout<<"Enter 1 for creating the array:\n";
		cout<<"Enter 2 for displaying"<<endl;
		cout<<"Enter 3 for sorting\n";
		cout<<"Enter 4 for reversing the array\n";
		cout<<"Enter 5 for searching the element in array:\n";
		cout<<"Enter 6 for merging the elements:\n";
		cout<<"Enter 7 for creating the B array:\n";
		cout<<"Enter 8 for exiting the program !\n";
		cout<<"Enter the choice:"; cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter num for creating array:";cin>>n1;
				create(n1);
				break;
			case 2:
				
//				cout<<"Enter the array name:";
//				cin>>z;
				display();break;
			case 3:
				sort(n1);break;
			case 4:
				revo(arr,n1);break;
			case 5:
				int val;
				cout<<"Enter the value for searching the element:";
				cin>>val;
				search(val);break;
			case 6:
				merge(n1,n2,result);break;
			case 7:
				cout<<"Enter the no of elements:";cin>>m;
				create(m);
				
				break;
			case 8:
				cout<<"Bye Bye Fuck You !";
				exit(0);
				
		}
	}
		
//	int n;
//cout<<"Enter the Input:"; cin>>n;
//create(n);
//int val;
//cout<<"\nEnter the serach value:";
//cin>>val;
//search(val);
//cout<<endl;
//sort(n);
//cout<<endl;
//display(n);
//cout<<endl;
//cout<<"Reversed:"<<endl;
//revo(arr,n);
//display(n);

return 0;

}
