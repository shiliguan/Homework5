//enumeration in C++
#include <iostream>
using namespace std;
enum nums { x = 9, y = 10, z = 5, w = 6 };

int main()
{
    cout << x+y<<" ";
    cout << x-y<<" ";
    cout << z*w<<" ";
    cout << z/w<<" ";
    cout << (x^y)<<" ";
    cout << (x&y)<<" ";
    cout << (x|y)<<" ";
    cout << (z >> 1)<<" ";
    cout << (x << 1)<<" ";
    cout << (x % z)<<" ";
    return 0;
}