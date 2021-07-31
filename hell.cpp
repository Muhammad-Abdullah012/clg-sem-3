#include <iostream>
#include<cstring>
using namespace std;
struct student {
  int rollNo,age;
  string name;
  string address;
};

void input(int size,student s[]) {
    int age;
    for(int i = 0; i < size; i++) {
        cout << "Enter age: ";
        cin >> age;
        if(age >= 11 && age <= 14) {
            s[i].age = age;
            cout << "Enter name: ";
            cin >> s[i].name;
            cout << "Enter Roll No: ";
            cin >> s[i].rollNo;
            cout << "Enter address: ";
            getline(cin,s[i].address);
        }//if
        
    }//outer loop
}//function...






void printNames(int size, student s[]) {
    for(int i = 0; i < size ; i++) {
        if(s[i].age == 14)
            cout << s[i].name;
    }
}


void printEvenRollNo(int size,student s[]) {
    for(int i = 0; i < size; i++) {
        if(s[i].rollNo % 2 == 0)
            cout << s[i].name;
    }
    
}


void printDetails(int size, student s[]) {
    int rollNO;
    cout << "Enter Roll No: ";
    cin >> rollNO;
    for(int i = 0; i < size; i++) {
        if(s[i].rollNo == rollNO) {
            cout << "Details of Roll NO " << rollNO << " is : \n";
            cout << "Name : " << s[i].name;
            cout << "Age : " << s[i].age;
            cout << "Address : " << s[i].address;
            
        }
    }
    
}


int main() {
    student s[10];
    input(10,s);
    cout << "\nNames of student age 14 :\n";
    printNames(10,s);
    cout << "\nEven roll NO: ";
    printEvenRollNo(10,s);
    cout << "\nData of specific student....";
    printDetails(10,s);
    return 0;
}
