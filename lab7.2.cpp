//. Write a C++ program to print all natural numbers between 1 to n using recursion


#include<iostream>
using namespace std;

int list(int n, int l) {
    if (n>l){
    }
    else {
	cout <<n; n++;
      list(n,l);
    }
}

int main () {
    int n;
    cout << " give us some n " << endl ;
    cin >> n;
    list(1,n);
    return 7 ;
}
       
