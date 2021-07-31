#include<iostream>
using namespace std;

int factorial(const int& v) {
	if(v == 0 || v == 1) {
		return 1;
	}
	else {
		return v * factorial(v-1);
	}
}



int main() {
	int a;
	cout << "Enter value to find factorial: ";
	cin >> a;
	cout << "Factorial of " << a << " is : "<<factorial(a);
	
	return 0;
}
