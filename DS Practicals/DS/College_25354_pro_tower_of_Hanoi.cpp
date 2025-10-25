 #include<iostream>
 using namespace std;
 void toh(int n,char source,char auxiliary,char destination){
 	if(n==1){
 		cout<<"Move disk 1 from"<<source <<" to "<< destination<<endl;
 		return;
	 }
	 toh(n-1,source,destination,auxiliary);
	 cout<<"Move disk"<<n<<" from "<<source<<" to "<<destination<<endl;
	 toh(n-1,auxiliary,source,destination);
	 
 }

 int main(){
// 	cout<<"Hello, world!";
int n;
cout<<"\n The sequence of moves:\n";cin>>n;
toh(n,'A','B','C');

return 0;
 }
