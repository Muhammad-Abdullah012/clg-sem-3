#include<iostream>
using namespace std;
template<class T>
class A {
	T *arr;
	int s;
	void shiftArray(T arr[], const int&, const int&);
public:
	A();
	~A();
	void TakeInput();
	void InsertionSort();
	void display();
};

template<class T>
A<T>::A() {
	arr = NULL;
	s = 0;
}

template<class T>
A<T>::~A() {
	delete[] arr;
}

template<class T>
void A<T>::TakeInput() {
	cout << "Enter size of array: ";
	cin >> s;
	arr = new T[s];
	cout << "Enter values for array: ";
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
}

template<class T>
void A<T>::shiftArray(T arr[], const int& s, const int& e) {
	//shift values in array starting from s to e;
	for (int i = e; i > s; i--) {
		arr[i] = arr[i - 1];
	}
}

template<class T>
void A<T>::InsertionSort() {
	for (int i = 1; i < s; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[i]) {
				T value = arr[i];
				shiftArray(arr, j, i);	//shift values in array from j to i
				arr[j] = value;		//insert value at it's correct place!
			}
		}
	}
}

template<class T>
void A<T>::display() {
	for (int i = 0; i < s; i++) {
		cout << arr[i] << "   ";
	}
	cout << "\n";
}
int main() {
	A<string> obj;
	A<int> obj2;
	obj.TakeInput();
	cout << "Array before insertion sort: ";
	obj.display();
	obj.InsertionSort();
	cout << "After insertion sort: ";
	obj.display();
	obj2.TakeInput();
	cout << "Array before insertion sort: ";
	obj2.display();
	obj2.InsertionSort();
	cout << "After insertion sort: ";
	obj2.display();
	return 0;
}