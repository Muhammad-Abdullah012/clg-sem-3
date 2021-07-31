#include<iostream>
using std::cin;
using std::cout;

inline int multiplyBy2(unsigned long int& x) {
	int turn = 0;
	if (x % 5 == 0 || x % 10 == 0) {
		while (x % 10) {
			x *= 2;
			turn++;
		}
	}
	else {
		turn = -1;
	}
	return turn;
}

int main() {
	unsigned short int t;
	cin >> t;
	unsigned long int *x;
	
	x = new unsigned long int[t];
	for (int i = 0; i < t; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < t; i++) {
		cout << multiplyBy2(x[i]) << "\n";
	}

	delete[] x;
	return 0;
}