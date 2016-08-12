#include <bits/stdc++.h>
using namespace std;
//rc
#define rep(j,l) for(int j=0; j<(l); j++)
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
int i;
int main(){
	int n,tmp,x,y,xi,yi,v;
	float mx=INT_MAX;
	cin>>x>>y;
	cin>>n;
	rep(i,n){
		cin>>xi>>yi>>v;
		//cout<<v;
	//	cout<<float((sqrt((xi-x)*(xi-x) + (yi-y)*(yi-y)))/v);
		mx=min(mx,(float)(sqrt(abs(xi-x)*abs(xi-x) + abs(yi-y)*abs(yi-y)))/v);
	}
	cout<<setprecision(12)<<mx;
}
