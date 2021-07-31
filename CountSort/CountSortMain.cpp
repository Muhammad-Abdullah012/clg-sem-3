#include<iostream>
using namespace std;

template<class T>
class sort {
	T* arr;
	int size;
public:
	sort() {
		arr = NULL;
		size = 0;
	}
	~sort() {
		if (arr != NULL) {
			delete[] arr;
		}
	}
	void Input();
	void display();
	T getMax(T[], const int&);
	void CountSort();
	void CountSort(T[], const int&);
};

template<class T>
void sort<T>::Input() {
	cout << "Enter size of array: ";
	cin >> size;
	arr = new T[size];
	cout << "Enter values for array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

template<class T>
void sort<T>::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << "\n";
}

template<class T>
T sort<T>::getMax(T arr[], const int& size) {
	T max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

template<class T>
void sort<T>::CountSort() {
	this->CountSort(this->arr, this->size);
}

template<class T>
void sort<T>::CountSort(T arr[], const int& size) {
	T CountSize = getMax(arr, size);
	T* count = new T[CountSize];
	T* result = new T[size];
	//Initialize count array to 0;
	for (int i = 0; i < CountSize; i++) {
		count[i] = 0;
	}
	//Count values of arr[] and increment in count;
	for (int i = 0; i < size; i++) {
		count[arr[i] - 1]++;	//value of arr is used as index, so it can only be int
	}
	//find commulative sum, that'll be stored in count array... 
	for (int i = 1; i < CountSize; i++) {
		count[i] += count[i - 1];
	}
	//store sorted values in result[]....
	for (int i = 0; i < CountSize; i++) {
		result[count[arr[i] - 1] - 1] = arr[i]; //value of arr is used as index, so it can only be int
		count[arr[i] - 1]--; //value of arr is used as index, so it can only be int
	}
	for (int i = 0; i < size; i++) {
		arr[i] = result[i];
	}
	delete[] result;
	delete[] count;
}


int main() {
	sort<int> obj;
	obj.Input();
	cout << "Actual array Before sorting: ";
	obj.display();
	cout << "\n";
	obj.CountSort();
	cout << "After sorting: ";
	obj.display();
	return 0;
}