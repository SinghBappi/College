#include<iostream>
using namespace std;


void insertionsort(int arr[],int size){
	for (int i = 0 ; i <size ; i++){
		int key = arr[i];
		int j = i - 1;
		while(j>=0 and arr[j]>key){
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1]=key;
	}
}

void display(int arr[],int n){
	cout<<"Display Function is Activated !\n";
	for (int i = 0 ; i < n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
int n;
cout<<"Enter Elements:";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" Elements:\n";
for(int i = 0 ;i<n;i++){
	cin>>arr[i];
}
insertionsort(arr,n);
display(arr,n);


return 0;

}
