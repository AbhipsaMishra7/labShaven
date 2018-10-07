//Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
 
#include<iostream>
using namespace std ;

int sum(int n) {
    if (n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main () {
    int n;
    cout << "give us some n" <<endl;
    cin >>n;
    cout <<"thus the sum of all the natural numbers from 1 to " << n << " is " << sum(n) << endl;
    return 7;
}
