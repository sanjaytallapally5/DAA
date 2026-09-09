#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int srt,vector<vector<int>>& adj,vector<bool>& visited){
	queue<int> q;
	q.push(srt);
	visited[srt]=true;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<" ";
		for(int x:adj[node]){
			if(!visited[x]){
				visited[x]=true;
				q.push(x);
			}
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
	bfs(srt,adj,visited);
	
}
