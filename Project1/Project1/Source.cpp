#include <iostream>
#include <cmath>
#include <bitset>

using std::cout;
using std::cin;
using std::bitset;
using std::dec;

//using namespace std;
char reverseBits(char c) {
	bitset<8> bits{ bitset<8>(c) };
	cout << "Initial bits: " << bits;
	for (int i = 0, j = 7; i < 4; i++,j--) {
		if(bits.test(i) != bits.test(j)) {
			bits.flip(i);
			bits.flip(j);
		}
	}
	cout << "\nAfter reversing!: " << bits << "\n";
	int ans{0};
	for (int i = 0; i < 8; i++) {
		if (bits.test(i)) {
			ans += pow(2,i);
		}
	}
	return static_cast<char>(ans);
}

int main() {
	//cout << bitset<8>('A') << "\n";
	cout << reverseBits('A');
	return 0;
}