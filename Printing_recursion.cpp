#include<iostream>
using namespace std;

void print(const int& v1, const int& v2) {
//	if(v2 < v1) {
//		print(v2, v1);
//	}
//	else {
		cout << v1 << "\n";
		if(v1 < v2) {
			print(v1 + 1,v2);
		}
//	}
}
/*
void print(int a,int b) {
	for(int i = a; i< b; i++) {
		cout << i;
	}
}

*/
int main() {
	int a,b;
	cout << "Enter starting No : ";
	cin >> a;
	cout << "Enter Ending No : ";
	cin >> b;
	print(a,b);
	
	return 0;
}
