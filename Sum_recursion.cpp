#include<iostream>
using namespace std;

int findSum(const int& v,const int& n) {
	if(v > n) {
		return findSum(n,v);
	}
	if(v == n) {
		return v;
	}
	else {
		return v + findSum(v + 1, n);
	}
}


int main() {
	int a,b;
	cout << "Enter start value : ";
	cin >> a;
	cout << "Enter end value : ";
	cin >> b;
	cout << "Sum of numbers from " << a <<" to " << b << " is : " << findSum(a,b);
	return 0;
}
