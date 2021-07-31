#include<iostream>
using namespace std;
template<class T>
class Number {
public:
	T findProd(const T&,const T&);
};
template<class T>
T Number<T>::findProd(const T& v,const T& n) {
	if(v == 0 || n == 0) {
		return 0;
	}
	if(v > n) {
		return findProd(n,v);
	}
	if(v == n) {
		return v;
	}
	else {
		return v * findProd(v + 1, n);
	}
}


int main() {
	Number <unsigned long long int> n;
	int a,b;
	cout << "Enter start value : ";
	cin >> a;
	cout << "Enter end value : ";
	cin >> b;
	cout << "Product of all numbers from " << a <<" to " << b << " is : " << n.findProd(a,b);
	return 0;
}
