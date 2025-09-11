#include<iostream>
using namespace std;
int a[20],n=5;
void display(int n) {
	cout<<"display function is here !\n";
	for(int i = 0; i<n; i++) {
		cout<<a[i]<<endl;
	}
	cout<<"Null";
}
void create(int n) {
	cout<<"Enter elements:";
	for(int i = 0 ; i <n ; i++) {
		cin>>a[i];
	}
	display(n);
}
void revo(int n) {
	cout<<"Reverse function called !";
	for(int i = n-1; i>=0; i--) {
		cout<<a[i]<<endl;
	}

}
void sort(int n) {
	cout<<"Sort function will implement !";
	int temp;
	for(int i = 0 ; i<n-1; i++) {
		for(int j = 0; j<n-1-i; j++) {
			if(a[j]>a[j+1]) {
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}

		}
	}
	display(n);
}
void search(int val){
	cout<<"Search function is implementing !\n";
	for(int i = 0;i<n;i++){
		if(a[i]==val){
			cout<<"Index : "<<i<<" and the element is :"<<a[i];
			return;
		}
	}
	cout<< "Not Found !";
	
}

int main() {
	create(5);
	revo(5);
	sort(5);
	search(4);
	
	display(5);


	return 0;

}