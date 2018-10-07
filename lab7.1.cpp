 //Write a C++ program to find power of any number using recursion.

#include<iostream>
using namespace std;

int index(int a , int b) {
    if (b==0) {
        return 1;
    }
    return a*index(a,b-1);
}
 
int main () {
    int a,b;
    cout <<"give us some a " <<endl;
    cin >>a;
    cout << "give us some b "<< endl;
    cin >> b;
    cout << "thus " << a<< " raised to the power " << b << " is " << index(a,b) <<endl;
    return 7;
}

