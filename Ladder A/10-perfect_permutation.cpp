#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%2==0) {
		for(int i=2; i<=n; i+=2) {
			cout<<i<<" "<<i-1<<" ";
		}
	}
	else cout<<-1;
}


