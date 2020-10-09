#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
typedef long long ll;
using namespace std;


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n, a, b, ans=0;
	cin>>n>>a>>b;

	while((n-a)!=1 && b!=0) {
		a++;
		b--;
		ans++;
	}

	cout<<ans+1;

	return 0;
}
