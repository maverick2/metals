#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
#define N 100005
int clr[N];
vector<int> adj[N];
int one,two;
/*void printGraph(){
	for(int i=1;i<=node;++i){
		cout << "Adjacency list of node " << i << ": ";
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}*/
bool bfs(int s){
	queue<int> q;
	q.push(s);
	clr[s]=1;one++;
	while(!q.empty()){
		int val=adj[q.front()].size(),x=q.front();
		//cout<<q.front()<<" ";
		q.pop();
		for(int i=0;i<val;i++){
			if(clr[adj[x][i]]==0)
			{	q.push(adj[x][i]);
				if(clr[x]==1){
					clr[adj[x][i]]=2;two++;
				}
				else{
					clr[adj[x][i]]=1;one++;
				}
			}
			else if(clr[x]==clr[adj[x][i]])
					return 1;
		}
	}
	return 0;
}
 
int main() {
	// your code goes here
	int edge,node,x,y,flag=0;
	cin>>node>>edge;
	memset(clr,0,sizeof(clr));
	for(int i=1;i<=edge;++i){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=node;++i){
		if(clr[i]==0 && !adj[i].empty())
		{
			flag=bfs(i);
			if(flag){
				cout<<-1;return 0;
			}
		}
	}
	//if(!flag){
		cout<<one<<"\n";
		for(int i=1;i<=node;++i){
			if(clr[i]==1)cout<<i<<" ";
		}
		cout<<"\n"<<two<<"\n";
		for(int i=1;i<=node;++i){
			if(clr[i]==2)cout<<i<<" ";
		}
		return 0;
	//}
	//cout<<-1;
	return 0;
}
