#include<iostream>
using namespace std;


void sort(int ar[], int s) {
	for(int i = 0; i < s ; i++) {
		for(int j = 0; j < s-1; j++) {
			if(ar[j] > ar[j+1]) {
				int temp;
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}	
	}
}

void display(int ar[],int s) {
	cout << "\n-----------------------------\n";
	for(int i = 0; i < s; i++) {
		cout << ar[i] << "  ";
	}
	cout << "\n-----------------------------\n";
}


void binarySearch(int ar[],int s,int n) {
	// n ko search krna ha...
	// s array ka size ha...
	int start = 0, end = s-1;
	int i = 0;
	if( n < ar[start]) {
		cout << "Value not found!";
	}
	else if( n > ar[end]) {
		cout << "Value not found!";
	}
	else if(n == ar[start]) {
		cout << n << " is in list!";
	}
	else if(n == ar[end]) {
		cout << n << " is in list!";
	}
	else {
		while(start < end) {
			if((end - start) == 1) {
				cout << n << " is not in list!\n";
				break;
			}
			else {
				i = (end - start)/2;	
			}
			
			if(n > ar[start + i]) {
				start = i;
			}
			else if (n < ar[start + i]) {
				end = i;
			}
			else {
				cout << " Value is at index "<< start+i;
				break;
			}
		}
	}
}


int main() {
	int ar[5];
	int n;
	cout << "Enter values for array: ";
	for(int i = 0; i<5; i++) {
		cin >> ar[i];
	}
	display(ar,5);
	sort(ar,5);
	display(ar,5);
	cout << "Enter a number to search: ";
	cin >> n;
	binarySearch(ar,5,n);
	return 0;
}
