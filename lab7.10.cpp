//library

#include<iostream>
using namespace std;

//create function

int fibo(int n) {
	if ((n==1)||(n==0)) {
		return (n);
	}
	else {
		return fibo(n-1)+fibo(n-2);
	}
}
    
//main function

int main (){
	int n;
	
   //ask for the value of n

	cout<< "give us the term number that you want to be displayed" << endl;
	cin >> n;
  // display nth term
	cout<< "hence the "<<n<<"th term of the Fibonacci sequence is "<< fibo(n)<< endl;
  //terminate main function  	
	return 0;
}
   

