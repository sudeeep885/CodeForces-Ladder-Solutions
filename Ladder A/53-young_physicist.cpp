#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short n;
	cin>>n;
	ll x, totalInputs=3*n, sums[3]={0};
	for(short i; i<totalInputs; ++i) {
		cin>>x;
		if(i%3==0) sums[0]+=x;
		else if(i%3==1) sums[1]+=x;
		else sums[2]+=x;
	}
	// cout<<sums[0]<<" "<<sums[1]<<" "<<sums[2]<<"\n";
	(sums[0]==0 && sums[1]==0 && sums[2]==0)?cout<<"YES":cout<<"NO";
	return 0;

}
