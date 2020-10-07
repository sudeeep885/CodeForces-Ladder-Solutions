#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

ll removeZeros(ll x) {
	string str = to_string(x);
	for(int i=0; str[i]; ++i) {
		if(str[i]=='0') {
			str.erase(i, 1);
			i--;
		}
	}
	return stoll(str);
}

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	ll a, b, c;
	cin>>a>>b;
	c=a+b;
	(removeZeros(a) + removeZeros(b) == removeZeros(c))?cout<<"YES":cout<<"NO";

	return 0;

}
