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

	short n, cnt1=1, cnt2=0;
	cin>>n;
	string s, team1, team2;
	cin>>team1;
	for(short i=1; i<n; ++i) {
		cin>>s;
		if(s==team1) cnt1++;
		else {
			team2=s;
			cnt2++;
		}
	}
	(cnt1>cnt2)?cout<<team1:cout<<team2;
	return 0;

}
