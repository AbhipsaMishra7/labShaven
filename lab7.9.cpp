#include<iostream>
using namespace std;
//Write a C++ program to find factorial of any number using recursion.

int factl(int n) {
    if (n>1) {
       return (n*factl(n-1));
    }
    else {
        return 1;
    }
}

int main () {
    int n;
    cout << "give us a natural number" << endl;
    cin >> n;
    cout << "factorial of "<< n<< " is " << factl(n) << endl;
    return 0;
}         
