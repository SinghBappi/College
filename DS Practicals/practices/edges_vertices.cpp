#include<iostream>
using namespace std;

int main(){
int n,e;

cout<<"Enter the Number of Vertices:"; cin>>n;
cout<<"Enter the Number of Edges:"; cin>>e;

int adj[20][20]={0};

cout<<"Enter edges(u,v):"<<endl;
for(int i = 0;i<e;i++){
	int u,v;
	cin>>u>>v;
	adj[u][v]=1;
	adj[v][u]=1;
}
cout<<"Adjacency Matrix:\n";
for(int i = 0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<adj[i][j]<<" ";
	}
	cout<<endl;
}


return 0;

}
