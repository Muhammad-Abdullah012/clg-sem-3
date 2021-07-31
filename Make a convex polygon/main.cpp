#include<iostream>
using namespace std;
void takeInput(unsigned short int& n) {
	unsigned short int **arr;
	cin >> n;
	arr = new unsigned short int*[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	
}
int main() {
	unsigned short int t;
	unsigned short int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		takeInput(n);
	}
	
	return 0;
}