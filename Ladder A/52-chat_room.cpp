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

	string s;
	cin>>s;
	int arr[4] = {0};
	if(s.length() < 5) { cout<<"NO"; return 0; }
	for(int i=0; i<s.length(); ++i) {
		if(s[i]=='h') { arr[0]++; continue; }
		if(s[i]=='e' && arr[0]) { arr[1]++; continue; }
		if(s[i]=='l' && arr[0] && arr[1]) {arr[2]++; continue;}
		if(s[i]=='o' && arr[0] && arr[1] && (arr[2]>1)) {arr[3]++; continue;}
	}
	
	
	// cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<"\n";
	if(arr[0] && arr[1] && arr[2] && arr[3]) cout<<"YES";
	else cout<<"NO";	

	return 0;

}
