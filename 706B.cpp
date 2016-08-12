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
int binarySearch(int arr[], int l, int r, long x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (arr[m] <= x) 
        l = m + 1; 
    else
         r = m - 1; 
  }
  return r; 
}

int main(){
	int n,k,q,ans=0;
	long val;
	cin>>n;
	int arr[n];
	rep(i,n){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cin>>q;
	while(q--){
		cin>>val;ans=0;
		int ans=binarySearch(arr,0,n-1,val);
		if(ans>=0)
			cout<<ans+1<<endl;
		else
			cout<<0<<endl;
	}
}	
