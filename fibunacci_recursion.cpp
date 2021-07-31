#include<iostream>
using namespace std;

void fibonacci(const int& a,const int& b) {
	cout << a << " , " << b << " , ";
	if(a == 144|| b == 144)
		return;
	fibonacci(a+b,b+a+b);
}


int main() {
	fibonacci(0,1);
	return 0;
}
