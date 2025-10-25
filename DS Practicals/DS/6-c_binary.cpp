 #include<iostream>
 using namespace std;
void seqsea(int arr[],int n,int var){
	bool flag=false;
	for (int i = 0 ; i<n;i++){
		if(arr[i]==var){
			flag = true;
			cout<<"Value found at "<<i<<endl;
			//return ;
		}
//		if(arr[i]==n-1 and flag==false){
//			cout<<"Value not found!";
//			return;
//		}
	}
	if (!flag) {
        cout << "Value not found!" << endl;
    }

//	cout<<"Value not found!";
}
int binaryS(int arr[],int n,int value){
	int low = 0,high = n-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]==value){
			return mid;
			
		}
		else if(arr[mid]<value){
			low = mid +1;
			
		}
		else{
			high = mid-1;
		}
	}
		return -1;
}

 int main(){
// 	cout<<"Hello, world!";
int n,k,a[100];
cout<<"Enter num for size of array:";
cin>>n;
for (int i = 0 ;i<n;i++){
	cin>>a[i];
}
cout<<"Enter a Number for binary searching :";
cin>>k;	
int c = binaryS(a,n,k);
cout<<"Your element is at "<<c;
//seqsea(a,n,k);

return 0;
 }
