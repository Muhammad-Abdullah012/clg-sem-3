#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::bitset;

void bitManipulate() {
	bitset<8> bits;
	bits = 0b00000101;
	if(bits.test(1)) 
		cout << bits;
}
int main() {
	bitManipulate();
	return 0;
}
