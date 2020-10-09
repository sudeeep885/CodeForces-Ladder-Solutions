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

	string inp;
	cin>>inp;

	FOR(i, 0, inp.length()) {
		inp[i] = tolower(inp[i]);
		if(!(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u' || inp[i] == 'y')) {
			cout<<'.'<<inp[i];
		}
	}

	return 0;

}
