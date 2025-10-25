 #include<iostream>
 #include<stack>
 #include<string>
 #include<algorithm>
 #include<cctype>
 using namespace std;
int precedence(char op){
	if(op=='^' || op == '/') return 2;
	if(op=='+' || op == '-') return 1;
	return 0;
}
bool isop(char ch){
	return ch == '+'||ch == '*' || ch == '/' || ch == '^';
}
string itp(string infix){
	string <char> s;
	string posfix;

for(int i = 0 ;i<infix.length();++i){
	char ch = infix[i];
	if (isalnum(ch)){
		postfix +=ch;
		
	}
	else if (ch=='('){
		while (!s.empty() and s.top()!='('){
			postfix +=s.top();
			s.pop();
			
		}
		s.push(ch);
	}
}
while(!s.empty()){
	postfix+=s.top();
	s.pop();
}
return postfix;
}	

 int main(){
// 	cout<<"Hello, world!";

string infix,potfix,prefixl
cout<<"Enter infix expression (only without spaces):";
cin>>infix;
postfix = itp(infix);
prefix = itprefix(infix);
cout<<"postfix:"<<postfix<<endl;
cout<<"prefix:"<<prefix<<endl;
return 0;
 }
