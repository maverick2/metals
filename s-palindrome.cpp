#include <iostream>
using namespace std;
//http://codeforces.com/contest/691/problem/B
int main() {
	// your code goes here
	int n,tmp,flag=0;
	string pal,str="aBCcDEeFfGghijKkJLlNPQRrSstyZzumn";
	cin>>pal;
	int len=pal.length();
	
	for(int i=0;i<len;i++){
		if(str.find(pal[i])!=string::npos){
			flag=1;break;
		}
	}
	for(int i=0;i<len/2;i++){
		if(pal[i]==pal[len-i-1] && pal[i]!='b'&& pal[i]!='d'&& pal[i]!='p'&& pal[i]!='q')continue;
		if(pal[i]=='p'&&pal[len-i-1]=='q' || pal[i]=='b'&&pal[len-i-1]=='d')continue;
		if(pal[i]=='q'&&pal[len-i-1]=='p' || pal[i]=='d'&&pal[len-i-1]=='b')continue;
	//	if(pal[i]=='L'&&pal[len-i-1]=='J' || pal[i]=='J'&&pal[len-i-1]=='L')continue;
		flag=1;
		//cout<<i;
		break;
	}
	if(flag || (len%2 && (pal[len/2]=='b' || pal[len/2]=='d'|| pal[len/2]=='p'|| pal[len/2]=='q')))cout<<"NIE";
	else cout<<"TAK";
	return 0;
}
