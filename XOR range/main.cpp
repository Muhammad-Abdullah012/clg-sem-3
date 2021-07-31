#include<iostream>
#include<bitset>
using namespace std;

bitset<1> getXOR(uint_fast64_t& l, uint_fast64_t& r) {
	bitset<1> b{ 0b0 };
	uint_fast64_t res = 0;
	for (; l <= r; l++) {
		res ^= l;
	}
	if (res % 2) {
		return b.set(0);
	}
	else {
		return b.reset(0);
	}

		
}

int main() {
	bitset<1>* b;
	uint_fast64_t t;
	uint_fast64_t l, r;
	cin >> t;
	b = new bitset<1>[t];
	for (int i = 0; i < t; i++) {
		cin >> l >> r;
		b[i] = getXOR(l, r);
	}
	for (int i = 0; i < t; i++) {
		if (b[i].test(0)) {
			cout << "Odd\n";
		}
		else {
			cout << "Even\n";
		}
	}
	delete[] b;
	return 0;
}