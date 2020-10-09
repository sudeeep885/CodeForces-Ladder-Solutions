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

	string inp, h, m;
	cin>>inp;

	h = inp.substr(0, 2); m = inp.substr(3, 5);

	do {
		if(m == "59") {
			m = "00";
			if(h == "23") {
				h = "00";
			}
			else {
				h = to_string(stoi(h)+1);
				if(h.length()<2) h = "0" + h;
			}
		}
		else {
			m = to_string(stoi(m)+1);
			if(m.length()<2) m = "0" + m;
		}
		
	} while( ! (h[0]==m[1] && h[1]==m[0]) );

	cout<<h<<":"<<m<<"\n";

	return 0;

}
