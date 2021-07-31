#include<iostream>
#include<bitset>
#include<cmath>
#include<queue>

using namespace std;

template<class T>
class RedixSortClass {
	T* arr;
	int size;
public:
	RedixSortClass() {
		arr = NULL;
		size = 0;
	}
	~RedixSortClass() {
		if (arr != NULL) {
			delete[] arr;
		}
	}

	void sort();
	void sort(T[], const int&);
	int MaxBitsRequired(T[], const int&);
	void Input();
	void display();

};

template<class T>
void RedixSortClass<T>::Input() {
	cout << "Enter size of array: ";
	cin >> size;
	arr = new T[size];
	cout << "Enter values for array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
template<class T>
void RedixSortClass<T>::sort() {
	this->sort(this->arr, this->size);
}


template<class T>
int RedixSortClass<T>::MaxBitsRequired(T a[], const int& s) {
	T max = a[0];
	for (int i = 1; i < s; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	int bits = 0;
	for (int i = 0; pow(2,i) - 1 < max ; i++) {
		bits = i;
	}
	return bits + 1;
}


template<class T>
void RedixSortClass<T>::sort(T arr[], const int& size) {
	//Make 2 queues,
	//Convert every digit into binary number,
	//if(binary digit is zero) push in zero queue,
	//else push in one queue
	//Not sorting for -ve values!!!
	queue<T> zero;	//We'll store zero bit values in it.	
	queue<T> one;	//We'll store one bit values in it.
	int MaxBits = MaxBitsRequired(arr, size);
	for (int j = 0; j < MaxBits; j++) {
		for (int i = 0; i < size; i++) {
			bitset<8> b = bitset<8>(arr[i]);
			//if bit is 1,
			if (b.test(j)) {
				one.push(arr[i]);
			}
			else {
				zero.push(arr[i]);
			}
		}
		int i = 0;
		while (!zero.empty()) {
			arr[i] = zero.front();	// Put values from queue back to arr
			zero.pop();
			i++;
		}
		while (!one.empty()) {
			arr[i] = one.front();	// Put values from queue back to arr
			one.pop();
			i++;
		}
	}
	
	
}


template<class T>
void RedixSortClass<T>::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << "\n";
}

int main() {
	RedixSortClass<int> obj;
	obj.Input();
	obj.display();
	obj.sort();
	obj.display();
	return 0;
}