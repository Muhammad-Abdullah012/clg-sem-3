#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::string;
//unsigned short int s = 5,
void takeInput(char cards[5], unsigned short int s = 5) {
	for(unsigned short int i = 0; i < s; i++) {
		cin >> cards[i];
	}
}

string checkFlush(char cards[], unsigned short int s = 10) {
	char c = cards[1];
	bool sameSuit = false;
	for(unsigned short int i = 0; i < s; i+=2) {
//		if((i%2) && (cards[i] == c)) {
//			sameSuit = true;
//		}
		if (cards[i] != c) {
//			sameSuit = false;
			return "NO";
		}
		else {
			continue;
		}
	}
	for(unsigned short int i = 1; i < s; i += 2) {
		if((cards[i] == 'A' && cards[i+1] != 'K') || (cards[i] == 'A' && cards[i-1] != '2') ) {
			return "NO";
		}
		else 
			continue;
	}
	return "YES";
}

void solve() {
	char cards[10];
	takeInput(cards);
	
	cout << checkFlush(cards);
}


int main() {
	solve();
	
	return 0;
}
