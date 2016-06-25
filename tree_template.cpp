#include <bits/stdc++.h>
using namespace std;
 
#define rep(j,n) for(int j=0; j<(n); j++)
#define repi(j,a,n) for(int j=a; j<(n); j++)
//#define tr(it,v) for(typeof((v).begin()) it=(v).begin(); it!=(v).end(); ++it)
//#define tr(it,v) for(auto it=(v).begin(); it!=(v).end(); ++it)
#define x first
#define y second
#define pb push_back
#define ALL(G) (G).begin(),(G).end()
 
typedef long long ll;
typedef long long LL;
typedef double D;
typedef pair<int,int> pii;
typedef vector<int> vi;
 
const int inft = 1000000009;
const int mod = 1000000007;
const int MAXN = 1000006;
int i,j;
int main(){
	int n,tmp;
	cin>>n;
	vi v[n+1];
	//v[1]=1;
	for(i=2;i<=n;i++){
		cin>>tmp;
		v[tmp].push_back(i);
	}
	
	for(i=1;i<=n;i++){
		for(j=0;j<=v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<"\n";
	}

	return 0;
}	


