#include<cstdlib>
#include<iostream>
using namespace std;
int a[20],n,n2,a1;
int reso[90];

void create(int num);
void display(int num);
void search(int val);
void sort(int num);
void reverse();
void merge(int a[],int n1, int b[],int n2,int result[]){
	for(int i=0;i<n1;i++){
		result[i]=a[i];
	}
	for(int i=0;i<n2;i++){
		result[i]=a[i];
	}
}
void create1(int num){
	cout<<"\nEnter"<<num<<" elements:\n";
	for(int i=0;i<num;i++){
		cin>>a1[i];
		
	}
	cout<<"\nArray created successfully.\n";
	display(num);
	
}

int main(){

//int a [20,n];
//fg

int choice,ch,val;
do{
	cout<<"\n Menu\n";
	cout<<"1.create"<<endl;
	cout<<"2.search"<<endl;
	cout<<"3.reverse"<<endl;
	cout<<"4.sort\n";
	cout<<"5. Merged\n";
	cout<<"6.exit\n";
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter the numbers of elements in the array:"<<endl;
			cin>>n;
			create(n);
			break;
		case 2 :
			cout<<"\nEnter the elements to be searched:";
			cin>>val;
			search(val);
			break;
		case 3:
			reverse();
			break;
		case 4:
			sort(n);
			break;
		case 5:
			cout<<"Enter the numbers of elements in the array:"<<endl;
			cin>>n2;
			create1(n2);
			merge(a,5,a1,5,reso);
			
			
		case 6:
			exit(0);
			break;
		default:
			cout<<"\n Invalid choice"<<endl;
			
	}
	cout<<"do u want to continue ? (1 - yes and 2 - no):";
	cin>>choice;
} while(choice==1);

return 0;


}
void create(int num){
	cout<<"\nEnter"<<num<<" elements:\n";
	for(int i=0;i<num;i++){
		cin>>a[i];
		
	}
	cout<<"\nArray created successfully.\n";
	display(num);
	
}
void display(int num){
	cout<<"Array elements:";
	for(int i=0;i<num;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	
}
void search(int val){
	for(int i=0;i<n;i++){
		if(a[i]==val){
			cout<<"\n Elements "<<val<<" found at index position "<< i <<endl;
			return ;
		}
	}
	cout<<"\n Search unsuccessful. Element not found\n";
}

void sort(int num){
	int temp;
	for(int i=0;i<num-1;i++){
		for(int j=0;j<num-i-1;j++){
			
		if(a[j]>a[j+1]){
			temp = a[j];
			a[j]= a[j+1];
			a[j+1]=temp;
			
		}
	}
		}
cout<<"\n array sorted successfully\n";
display(num);

}

void reverse(){
	cout<<"\n Reversed array:";
	for(int i = n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}



