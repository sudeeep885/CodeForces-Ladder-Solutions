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

	short n, cnt=0;
	cin>>n;
	string s, validAlcohols[11] = {"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
	while(n--) {
		cin>>s;
		if(s[0]>='0' && s[0]<='9') {
			if(stoi(s) < 18) cnt++;
		}
		else for(short i=0; i<11; ++i) if(validAlcohols[i]==s) cnt++;
	}

	cout<<cnt;
	return 0;

}
