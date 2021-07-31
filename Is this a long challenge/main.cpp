#include<iostream>
#include<cmath>
#include<string>
using std::cin;
using std::cout;
using std::string;
using namespace std;
class Query {
public:
	
	unsigned int l, r;
	unsigned long int p, q;
	char ch;
};

void getQuery1(Query& Q) {
	cin >> Q.l;
	cin >> Q.r;
	cin >> Q.ch;
}

void changePQ(Query& Q,string& s, unsigned int& n) {
	const unsigned long long int mod = pow(10, 9) + 7;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			Q.p = (Q.p - Q.q + mod) % mod;
			Q.q = (unsigned long long int)(Q.p + Q.q) % mod;
		}
		if (s[i] == 'B') {
			Q.p = (unsigned long long int)(Q.p + Q.q) % mod;
			Q.q = (Q.p - Q.q + mod) % mod;
		}
	}
	cout << Q.p << Q.q << "\n";
}

inline void getQuery2(Query& Q) {
	cin >> Q.l >> Q.r >> Q.p >> Q.q;
}
void inputData(unsigned int& n, string& s, unsigned short int& q, Query& Q) {
	
	cin >> n;
	cin >> s;
	//getline(cin, s);
	cin >> q;
	for (int i = 0; i < q; i++) {
		unsigned short int num;
		cin >> num;
		if(num == 1)
			getQuery1(Q);
		if (num == 2) {
			getQuery2(Q);
			changePQ(Q,s,n);
		}

			
	}
}

int main() {
	string s;
	Query Q;
	unsigned short int t;
	unsigned int n;
	unsigned short int q;
	cin >> t;
	for (int i = 0; i < t; i++) {
		inputData(n, s, q, Q);
	}
	
	return 0;
}
