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

	int n, k=0;
	cin>>n;

	string num;
	num = to_string(n);

	int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};

	FOR(i, 0, num.length()) {
		if( !(num[i]=='4' || num[i]=='7') ) {
			break;
		}
		if(i==num.length()-1) {
			cout<<"YES";
			return 0;
		}
	}

	while(arr[k]<n) {
		if(n%arr[k] == 0) {
			cout<<"YES";
			return 0;
		}
		k++;
	}

	cout<<"NO";

	return 0;

}
