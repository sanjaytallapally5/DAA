#include <iostream>
#include <vector>
using namespace std;
void dfs(int node, vector<vector<int>>& adj,vector<bool>& visited){
	visited[node]=true;
	cout<<node<<"  ";
	for(int x:adj[node]){
		if(!visited[x]){
			dfs(x,adj,visited);
		}
	}
}
int main(){
	cout<<"enter the no for vertices"<<endl;
	int n;
	cin>>n;
	vector<vector<int>> adj(n);
	cout<<"enter vertices and Edge u,v:"<<endl;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<bool> visited(n,false);
	cout<<"enter srt node"<<endl;
	int srt;
	cin>>srt;
	dfs(srt,adj,visited);
	
}
