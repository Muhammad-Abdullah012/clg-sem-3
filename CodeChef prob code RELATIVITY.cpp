#include<iostream>
using namespace std;

int main() {
	short int t, *g, *c;
	cin >> t;
	g = new short int[t];
	c = new short int[t];
	for(int i = 0; i<t; i++) {
		cin >> g[i] >> c[i];
	}
	
	for(int i = 0; i<t; i++) {
		cout << (c[i] * c[i])/(2*g[i])<< "\n";
	}
	
	return 0;
}
