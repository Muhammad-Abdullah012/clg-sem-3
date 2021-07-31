#include <iostream>
#include <string>

using namespace std;

template<class T>
class Stack {
private :
    int top;
    int size;
    T *stk;                            
public:
    Stack();
    ~Stack();
    void push(T);
    void pop();
    T Top();  //or peak()
    bool isEmpty();
    int Size();
    void display();
};

template<class T>
Stack<T>::Stack() {
    top = -1;
    size = 5;
    stk = new T [size];
}

//Destructor
template<class T>
Stack<T>::~Stack() {
    delete[] stk;
}


template<class T>
void Stack<T>::push(T a) {
    if (top == size - 1) {
        cout << "Stack is full";
    }
    else {
        top++;
        stk[top] = a;
    }
}


template<class T>
void Stack<T>::pop() {
    if(top > -1) {
        top--;    
    }
	else {
        cout << "Stack is empty";
    }
}

template<class T>
T Stack<T>::Top() {
    return stk[top];
}

template<class T>
bool Stack<T>::isEmpty() {
	return (top == -1);
}

template<class T>
int Stack<T>::Size() {
    return size;
}


template<class T>
void Stack<T>::display() {
	if(this->isEmpty()) {
		cout << "Stack is empty!!";
	}
	else {
		cout << "\n----------------------------------------------\n";
	    for(int i = top; i >= 0; i-- ) {
	        cout << stk[i] << "   ";
	    }
	    cout << "\n----------------------------------------------\n";
	}
}
template<class T>
string TypeOf(const T &v) {
	return std::to_string(v);
}


template<class T>
void AccessStack(Stack<T> s) {
	int ch;
	T v;
	cout << "Data type is : " << TypeOf(v);
    do {
        cout << "\nwhat do you want to do?\n";
        cout << "0 Quit !\n";
        cout << "1 Enter value in stack ?\n";
        cout << "2 Delete value from stack ?\n";
        cout << "3 Check if stack is empty ?\n";
        cout << "4 Check Size of stack (Maximum values stack can store) ?\n";
        cout << "5 Display top value of stack ?\n";
        cout << "6 display values of stack ?\n";
        cin >> ch;
        switch(ch) {
            case 0:
                break;
            case 1:
                cout << "Enter " << TypeOf(v) << " value : ";
                cin >> v;
                s.push(v);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if(s.isEmpty())
                    cout << "Stack is Empty!";
                else
                     cout << "Stack is not Empty!";
                break;
            case 4:
                cout << "Maximum values this stack can store is : "<<s.Size();
                break;
            case 5:
                cout << "Value at top is : "<<s.Top();
                break;
            case 6:
                s.display();
                break;
            default:
                cout << "\nInvalid choice!\n";
                continue;
        }
    } while(ch != 0);
}


int main() {
    Stack <int> s;
    //Stack <float> s2;
    //Stack <char> s3;
    AccessStack(s);
	//cout << sizeof(double);
    //cout << sizeof(int);
	//AccessStack(s2);
    //AccessStack(s3);
	return 0;
}



