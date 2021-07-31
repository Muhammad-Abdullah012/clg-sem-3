#include<bits/stdc++.h>
using std::cin;
using std::cout;

int findMax(const unsigned short int& s,int a[],int& maxOccur) {
	int max = a[0];
	int maxIndex = 0;
	for(unsigned int i = 1; i < s; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	for(unsigned int i = 0; i < s; i++) {
		if(a[i] == max) {
			maxOccur++;
			if(maxOccur == 1 || maxOccur == 3) {
				maxIndex = i;
			}
		}
	}
	return maxIndex;
}

void input() {
	int values[100];
	int maxOccur = 0;
	unsigned short int size;
	cin >> size;
	for(unsigned short int i = 0; i < size ;i++ ) {
		cin >> values[i];	
	}
	int maxI = findMax(size,values,maxOccur);
	for(int i = 0; i < size; i++) {
		if(i != maxI) {
			cout << values[i] << " ";	
		}
	}
	
}


int main() {
	input();

	return 0;
}
