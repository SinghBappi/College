// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 5
class Stack{
    private:
    int arr[MAX];
    int top;

public:
Stack(){
    top = -1;
}

void push(int val){
    if(top>=MAX-1){
        cout<<"Over Flow Issue !";
        return;
    }
    else{
        top = top + 1;
        arr[top] = val;
        cout<<"Pushed value is "<<val<<endl;
    }
}

void pop(){
    if(top<=-1){
        cout<<"Underflow Issue !";
        return;
    }
    else{
        cout<<arr[top]<<" popped from the stack !"<<endl;
        top = top - 1;
        
    }
}
void peek(){
    if(top==-1){
        cout<<"Empty Under flow issue!";
        return;
    }
    else{
        cout<<"Top of the Stack: "<<arr[top];
    }
}
void display(){
    if(top==-1){
        cout<<"Emptiness under flow issue";
        return;    
    }
    else{
        cout<<"Stack Elements:"<<endl;
        for(int i = 0 ; i <=top;i++){
            cout<<arr[i]<<" ";
            
        }
        cout<<endl;
    }
    
}
};
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    Stack obj;
    obj.push(2);
    obj.push(4);
    obj.push(6);
    obj.push(8);
    obj.pop();
    obj.display();
    obj.peek();
    

    return 0;
}