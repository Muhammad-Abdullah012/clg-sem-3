#include<iostream>
using std::cin;
using std::cout;

unsigned int SumOfdigits(unsigned long int& n) {
	unsigned int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void takeInputs() {
	unsigned short int t;
	cin >> t;
	unsigned long int* n;
	n = new unsigned long int[t];
	for (int i = 0; i < t; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < t; i++) {
		cout << SumOfdigits(n[i]) << "\n" ;
	}
	delete[] n;
}

int main() {
	
	takeInputs();
	
	return 0;
}