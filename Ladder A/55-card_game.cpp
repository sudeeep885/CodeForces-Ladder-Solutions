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

	string a, b, c;
	map<char, int> m;
	m['6']=1, m['7']=2, m['8']=3, m['9']=4, m['T']=5, m['J']=6, m['Q']=7, m['K']=8, m['A']=9;
	cin>>c>>a>>b;
	if( (a[1]==b[1] && m[a[0]]>m[b[0]]) || (a[1]==c[0] && b[1]!=c[0]) ) cout<<"YES";
	else cout<<"NO";
	
	return 0;

}
