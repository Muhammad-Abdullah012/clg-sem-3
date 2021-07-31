#include<bits/stdc++.h>
using namespace std;

inline unsigned short int seriesNum(unsigned short int x,unsigned short int y,unsigned int index,unsigned short int prev ) {
	return (index % 2) ? prev + x : prev - y;
} 

int solve(unsigned int short x,unsigned short int y,unsigned short int z) {
	unsigned short int a0 = 0;
	if(z == 0) {
		return 1;
	}
	else {
		for(unsigned int i = 1;;i++) {
			a0 = seriesNum(x,y,i,a0);
			if(a0 == z)
				return i;
			if(a0 > z+1) {
				return -1;
			} 				
		}
	}
}

int main() {
	int x,y,z;
	cin >> x >> y >> z;
	cout << solve(x,y,z);
	return 0;
}
