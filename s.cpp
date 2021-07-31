#include<iostream>
using namespace std;

int sum(int a,int b) {
	if(a<=b)
		return a + sum(a+1,b);
}


int main() {
	cout<<sum(1,5);
	return 0;
}
