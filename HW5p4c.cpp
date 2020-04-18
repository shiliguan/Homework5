//c++ pointer reference
#include <iostream>
using std::cout;
using std::endl;
int main() { 
    int a = 33;	 
    int * pA; 
    // assign the address of the variable a to pointer pA
    pA = &a; 
    cout << pA << endl; 
    cout << &a << endl; 
    cout << *pA << endl; 
    cout << a << endl; 
    // reassgined
    *pA = 66;			 
    cout << pA << endl; 
    cout << &a << endl; 
    cout << *pA << endl; 
    cout << a << endl; 
    cout << &pA << endl; 
}