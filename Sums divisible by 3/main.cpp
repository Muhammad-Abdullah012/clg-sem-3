#include<iostream>

using std::cout;
using std::cin;

//s0 -> Number of zeros
//s1 -> Number of 1's
//s2 -> Number of 2's
// Check maximum number of subsets can be formed whose sum of all elements is divisible by 3
unsigned long int getResult(unsigned long int& s0, unsigned long int& s1, unsigned long int& s2) {
	//Sum of all zeros is divisible by 3 i.e 0/3 = 0
	//So , number of zeros are number of subsets whose sum of all elements are divisible by 3. Example in comments....
	// => {0}, {0} , {0} => All elements of all subsets are divisible by 3.....
	if (s2 > s1) {
		// if 2's are more than 1's,. then..
		// {2,2,2,2} {1,1}
		s2 -= s1;	// => {2,1}, {2,1} Subtract Number of 1's from Number of 2's and assign it to remaining No of 2's..
		// Now {2,2} are left...
		s0 += (s2 / 3) + s1; // we get {0},{0},{0},{2,1},{2,1} possible subsets whose all elements are divisible by 3...
	}
	else if(s1 > s2) {
		s1 -= s2;
		s0 += (s1 / 3) + s2;
		//s2 = 0;
		//s0 += s2;
	}
	else {
		s0 += s1;
	}
	/*
	* while (s2 && s1) {
		s2--;
		s1--;
		s0++;
	}
	*/
	
	
	
	
	return s0;
}

int main() {
	unsigned int t;
	unsigned long int s0, s1, s2;
	unsigned long int *result;
	cin >> t;
	result = new unsigned long int[t];
	for (int i = 0; i < t; i++) {
		cin >> s0 >> s1 >> s2;
		result[i] = getResult(s0, s1, s2);
	}
	for (int i = 0; i < t; i++) {
		cout << result[i] << "\n";
	}
	delete[] result;
	return 0;
}