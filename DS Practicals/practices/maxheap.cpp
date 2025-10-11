#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int parent = (i-1)/2;
    if(parent>=0){
        if(arr[i]>arr[parent]){
            swap(arr[i],arr[parent]);
            
            
            heapify(arr,n,parent);
            
        }
    }
}
    void printarray(int arr[],int n){
        for(int i =0;i<n;i++){
            cout<<arr[i]<< " ";
            
        }cout<<endl;
    }
    void inserto(int arr[],int &n,int key){
        n= n+1;
        arr[n-1]=key;
        
    }
    
int main(){
    int arr[]={1,75,2,895,11};
    int n = 5;
    int key = 96;
    cout<<"Original Heap:\n";
    printarray(arr,n);
    inserto(arr,n,key);
    cout<<"Altered Heap:\n";
    printarray(arr,n);
    return 0;
}