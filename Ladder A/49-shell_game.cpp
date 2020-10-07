#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;
 
int main() {
 
// 	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
// 	#endif
 
	short n, a, b;
	cin>>n;
	for(short i=0; i<3; ++i) {
		cin>>a>>b;
		if(n==a) n=b;
		else if(n==b) n=a;
	}
	
	cout<<n;
	return 0;
 
}