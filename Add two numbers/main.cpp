#include<iostream>
using std::cout;
using std::cin;

inline unsigned short int getSum(unsigned short int& a, unsigned short int& b) {
	return a + b;
}

int main() {
	unsigned short int t;
	cin >> t;
	unsigned short int* a, * b;
	a = new unsigned short int[t];
	b = new unsigned short int[t];
	for (int i = 0; i < t; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < t; i++) {
		cout << getSum(a[i], b[i]) << "\n";
	}
	delete[] a;
	delete[] b;
	return 0;
}