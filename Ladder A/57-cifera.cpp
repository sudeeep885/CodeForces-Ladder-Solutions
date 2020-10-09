#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;


int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	ll k, l, i, count=0;
	cin>>k>>l;
	i = k;
	while(k<=l) {
		count++;
		if(k==l) {
			cout<<"YES"<<"\n";
			cout<<count-1;
			return 0;
		}
		k = i*k;
	}
	cout<<"NO";

	return 0;

}
