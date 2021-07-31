#include<iostream>
using namespace std;

template<class T>
class A {
	T* arr;
	int size;
	void heapify(int[], const int&, const int&);
public:
	A() {
		arr = NULL;
		size = 0;
	}
	~A() {
		if(arr != NULL)
			delete[] arr;
	}
	void TakeInput();
	void display();
	void HeapSort();
	
	template<class U>
	friend void Swap(U&, U&);
};

template<class T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<class T>
void A<T>::TakeInput() {
	cout << "Enter size of array: ";
	cin >> size;
	arr = new T[size];
	cout << "Enter values: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

template<class T>
void A<T>::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << "\n";
}

template<class T>
void A<T>::heapify(int arr[], const int& size, const int& node) {
	int max = node;
	int left = 2 * node + 1;
	int right = 2 * node + 2;
	if (left < size && arr[left] > arr[max]) {
		max = left;
	}
	if (right < size && arr[right] > arr[max]) {
		max = right;
	}
	if (max != node) {
		Swap(arr[node], arr[max]);		//node is parent node, it must be max
		heapify(arr, size, 0);
	}
	else {
		if (left < size)
			heapify(arr, size, left);	//Heapify left subtree
		if (right < size)
			heapify(arr, size, right);	//Heapify right subtree
	}
}

template<class T>
void A<T>::HeapSort() {
	//Technique here is to heapify the array (converting to max heap)
	//Then swap heap root with last index of the array;
	//And reduce the heap size in next iteration to heapify it again.
	//In this way, we get our array sorted from last index.
	for (int i = 0; i < size; i++) {
		heapify(arr, size - i, 0);
		Swap(arr[0], arr[size - 1 - i]);	//swap heap root with last index of unsorted part of array,..
	}
}

int main() {
	A<int> obj;
	obj.TakeInput();
	cout << "Before Heap Sort: ";
	obj.display();
	obj.HeapSort();
	cout << "After Heap Sort: ";
	obj.display();
	return 0;
}
