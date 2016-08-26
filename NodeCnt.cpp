#include <iostream>
#include <queue>
#include <list>
#include <vector>
#include <cstring>
using namespace std;
/* Input Format
-Number of nodes
-x y
*/
int mark[100005],l[100005];
vector<int> adj[100005];
 
int bfs(int s,int ls){
	queue<int> q;
	q.push(s);
	mark[s]=1;
	int rsz=adj[q.front()].size(),i=0,j=1;
	l[0]=1;
 
	while(!q.empty()){
		int val=adj[q.front()].size(),x=q.front();
//		cout<<q.front()<<" ";
		if(i==l[j-1]){
			l[j]=q.size();
			if(ls-1 == j)return l[j];
			//cout<<l[j]<<" ";
			j++;i=0;
		}
		q.pop();
		i++;
		for(int i=0;i<val;i++){
			if(mark[adj[x][i]]!=1)
			{
				q.push(adj[x][i]);
				mark[adj[x][i]]=1;
			}
		}
	}
 
}
 
int main() {
	// your code goes here
	int edge,node,x,y;
	cin>>node;
	edge=node-1;
	memset(mark,0,sizeof(mark));
	for(int i=0;i<edge;++i){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int ls;cin>>ls;
	if(ls==1){
		cout<<1;return 0;
	}
	/*for(int i=1;i<=node;++i){		
		cout << "Adjacency list of node " << i << ": ";
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	cout<<bfs(1,ls);
	return 0;
}
