#include<bits/stdc++.h>
using std::cout;
using std::cin;


void solve() {
	unsigned long long int n;
	unsigned long long int count = 0;
	cin >> n;
	n++;
	for(; n != 0;) {
		n /= 10;
		count++;		
	}
	cout << count;
}

int main() {
	solve();
	return 0;
}
