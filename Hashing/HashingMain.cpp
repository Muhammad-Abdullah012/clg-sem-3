#include<iostream>
#include<typeinfo>
using namespace std;

template<class T>
class hashing {
	T* arr;
	T* hash;
	int hashSize;
	int size;
	int CalculateHash(const T&);
public:
	hashing() {
		arr = NULL;
		hash = NULL;
		size = 0;
		hashSize = 0;
	}
	~hashing() {
		if (arr != NULL)
			delete[] arr;
		if (hash != NULL)
			delete[] hash;
	}
	void Input();
	void StoreHash();
	void display();
};

template<class T>
void hashing<T>::display() {

}


template<class T>
int hashing<T>::CalculateHash(const T& a) {
	if (typeid(a) == typeid(int)) {
		return a % hashSize;
	}
}

template<class T>
void hashing<T>::StoreHash() {
	hashSize = 2 * size;
	hash = new T[hashSize];
	for (int i = 0; i < size; i++) {
		int index = CalculateHash(arr[i]);
		hash[index] = arr[i];
	}
}

template<class T>
void hashing<T>::Input() {
	cout << "Enter size of array: ";
	cin >> size;
	arr = new T[size];
	cout << "Enter values in array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main() {
	hashing<int> obj;
	obj.Input();
	obj.StoreHash();
	return 0;
}