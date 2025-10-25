#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minIndex = i;
		for(int j = i + 1;j < n;j++){
			if(arr[j]<arr[minIndex])
			  minIndex = j;
		}
		if(minIndex != i){
			int temp=arr[i];
			arr[i]= arr[minIndex];
		}
	}  
}
void printArray(int arr[],int n){
	cout<<"Sorted Array:";
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	cout<<endl;    
}
int main(){
	int arr[]={29, 10, 14, 37, 14};
	int n= sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}

