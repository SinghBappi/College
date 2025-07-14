// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int arr[20],n;
void create(){
    // int n;
    cout<<"Enter the Number of elements should present on array:";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter arr["<<i+1<<"]";
        cin>>arr[i];
    }
    cout<<"Displaying here in create function:-";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}
void search(int val){
    for(int i =0 ;i<n;i++){
        if(arr[i]==val){
            cout<<"Found at "<<i+1<<" postion and the value is "<<val;
                return;
        }
    } cout<<"Unable to find !";
}
void sorting(){
    for(int i = 0;i<n-1;i++){
        for(int j = 0 ; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void disco(){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}
int main() {
    int y;
    create();
    cout<<"\nEnter the value for searching element in array:";
    cin>>y;
    search(y);
    sorting();
    disco();

  
    return 0;
}